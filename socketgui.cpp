#include "socketgui.h"
#include "ui_socketgui.h"

SocketGUI::SocketGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SocketGUI),
    mMethodCallback(this, &SocketGUI::handle_receive),
    server(mMethodCallback)
{
    ui->setupUi(this);

    QButtonGroup* group = new QButtonGroup(ui->centralWidget);
    group->addButton(ui->radioMakeServer);
    group->addButton(ui->radioMakeClient);
    group->setExclusive(true);

//    qRegisterMetaType<QTextBlock>("QTextBlock");
//    qRegisterMetaType<QTextCursor>("QTextCursor");

    //connect buttonClicked signal to our custom slot 'buttonClick'
    connect(group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(buttonServerClientSelectClick(QAbstractButton*)));
    connect(ui->buttonServerListen, SIGNAL(clicked(bool)), this, SLOT(buttonServerListen_clicked(bool)));
    connect(ui->buttonClientConnect, SIGNAL(clicked(bool)), this, SLOT(buttonClientConnect_clicked(bool)));

    connect(this, &SocketGUI::updateReceivedText, this, &SocketGUI::onUpdateReceivedText, Qt::QueuedConnection);
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

        // configure server
        server.listen_on(ui->ipReceiveOn->text().toStdString(), ui->portReceiveOn->text().toInt());

        // Start server thread
        server.Start();

        ui->buttonServerListen->setText(QString("Stop Listening"));
    }
    else
    {
        PRINT("Listen OFF");
        server.Stop();
        ui->buttonServerListen->setText(QString("Listen"));
    }
}

void SocketGUI::handle_receive(const boost::shared_ptr<std::vector<uint8_t> >& inData,
                               const boost::shared_ptr<udp::endpoint>& inEndpoint)
{
    QString receivedData;
    std::vector<uint8_t> data;
    BOOST_FOREACH(uint8_t byte, *inData)
    {
        data.push_back(byte);
        receivedData += QString(byte);
    }
    std::cout << "Address=" << inEndpoint->address().to_string() << ":" << inEndpoint->port() << std::endl;
    ui->textEditReceive->appendPlainText(receivedData);
    emit updateReceivedText();
}


void SocketGUI::buttonClientConnect_clicked(bool)
{

}

void  SocketGUI::on_buttonSend_clicked(bool /*inChecked*/)
{
    PRINT("CLICKED");
    udp::endpoint aEndPoint;
    try
    {
        aEndPoint = server.send_on(ui->ipRemoteSendTo->text().toStdString(), ui->portRemoteSendTo->text().toInt());
    }
    catch (boost::system::error_code& ec)
    {
        std::cout << "Caught error: " << ec.value() << " " << ec.message() << std::endl;
    }
    std::string* msg = new std::string(ui->textEditSend->toPlainText().toStdString());
    boost::shared_ptr<std::string> message(msg);
    PRINT("SENDING");
    server.send_to(message, aEndPoint);

    PRINT("SENT");
    ui->textEditSend->clear();
}

void  SocketGUI::on_buttonClear_clicked(bool /*inChecked*/)
{
    ui->textEditReceive->clear();
}

void SocketGUI::onUpdateReceivedText()
{
    PRINT("Signal caught");
    ui->textEditReceive->update();
}
