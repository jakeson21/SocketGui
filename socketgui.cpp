#include "socketgui.h"
#include "ui_socketgui.h"

SocketGUI::SocketGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SocketGUI),
    mMethodCallback(this, &SocketGUI::handle_receive),
    server(mMethodCallback)
{
    ui->setupUi(this);

    connect(this, &SocketGUI::updateReceivedText, this, &SocketGUI::onUpdateReceivedText, Qt::QueuedConnection);
}

SocketGUI::~SocketGUI()
{
    delete ui;
}

void SocketGUI::on_buttonServerListen_clicked(bool)
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
    emit updateReceivedText(receivedData);
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
    ui->listReceivedMessages->clear();
}

void SocketGUI::onUpdateReceivedText(QString inText)
{
    PRINT("appendPlainText");
    ui->listReceivedMessages->addItem(inText);
    ui->listReceivedMessages->scrollToBottom();
}
