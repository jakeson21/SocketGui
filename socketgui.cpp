#include "socketgui.h"
#include "ui_socketgui.h"

SocketGUI::SocketGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SocketGUI),
    server()
{
    ui->setupUi(this);

    QButtonGroup* group = new QButtonGroup(ui->centralWidget);
    group->addButton(ui->radioMakeServer);
    group->addButton(ui->radioMakeClient);
    group->setExclusive(true);

    //connect buttonClicked signal to our custom slot 'buttonClick'
    connect(group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(buttonServerClientSelectClick(QAbstractButton*)));
    connect(ui->buttonServerListen, SIGNAL(clicked(bool)), this, SLOT(buttonServerListen_clicked(bool)));
    connect(ui->buttonClientConnect, SIGNAL(clicked(bool)), this, SLOT(buttonClientConnect_clicked(bool)));

    connect(this, &SocketGUI::updateReceivedText, this, &SocketGUI::onUpdateReceivedText);
}

SocketGUI::~SocketGUI()
{
    delete ui;
}

void SocketGUI::buttonServerClientSelectClick(QAbstractButton* button)
{
    std::string source = button->text().toStdString();
    if (source == "Server")
    {
        ui->buttonServerListen->setEnabled(true);
        ui->buttonClientConnect->setEnabled(false);
    }
    else if (source == "Client")
    {
        ui->buttonServerListen->setEnabled(false);
        ui->buttonClientConnect->setEnabled(true);
    }
}

void SocketGUI::buttonServerListen_clicked(bool)
{
    if (ui->buttonServerListen->isChecked())
    {
        PRINT("Listen ON");
        server.listen_on(ui->ipReceiveOn->text().toStdString(), ui->portReceiveOn->text().toInt());
//        boost::thread t(boost::bind(&boost::asio::io_service::run, mRxIoService));
        boost::thread t(boost::bind(&Comm::UdpServer::Run, &server));
        t.detach();
        ui->buttonServerListen->setText(QString("Stop Listening"));
    }
    else
    {
        PRINT("Listen OFF");
        server.Stop();
        ui->buttonServerListen->setText(QString("Listen"));
    }
}

void SocketGUI::handle_receive(const boost::system::error_code& error,
        std::size_t bytes_transferred)
{
    PRINT("handle_receive()");
    if (!error || error == boost::asio::error::message_size)
    {
        PRINT("UDP packet received");

        std::vector<char> aData(server.recv_buffer_.begin(), server.recv_buffer_.end());
        std::cout << std::endl << "=========================================" << std::endl;
        std::cout << "Received " << bytes_transferred << " bytes from " << server.mReceiveRemoteEndpoint.address().to_string()
                      << ":" << server.mReceiveRemoteEndpoint.port() << std::endl;

        QString receivedData;
        BOOST_FOREACH(char byte, aData)
        {
            receivedData += QString(byte);
        }
        ui->textEditReceive->appendPlainText(receivedData);
        emit onUpdateReceivedText();

        server.start_receive();
    }
    else if (error == boost::asio::error::operation_aborted)
    {
        PRINT("asio::error::operation_aborted in handle_receive()");
    }
}

void SocketGUI::buttonClientConnect_clicked(bool)
{
    server.mSendRemoteEndpoint = server.send_on(ui->ipRemoteSendTo->text().toStdString(), ui->portRemoteSendTo->text().toInt());
    boost::shared_ptr<std::string> message(new std::string("Hello"));
    server.send_to(message, server.mSendRemoteEndpoint);
}

void SocketGUI::onUpdateReceivedText()
{
    std::cout << "Caught onUpdateReceivedText()" << std::endl;
    this->update();
}
