#ifndef SOCKETGUI_H
#define SOCKETGUI_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QRadioButton>
#include <QMessageBox>

#include </home/fuguru/git/UdpServer/udpserver.hpp>
//#include </home/fuguru/git/tinyxml2/tinyxml2.h>
//#include </home/fuguru/git/xmls/XMLSerialization.h>

#include <boost/thread/thread.hpp>

using namespace Comm;

namespace Ui {
class SocketGUI;
}

class SocketGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit SocketGUI(QWidget *inParent = 0);
    ~SocketGUI();

    void handle_receive(const boost::system::error_code& error,
            std::size_t bytes_transferred);

signals:
    // To communicate with Gui Thread
    // we need to emit a signal
    void updateReceivedText();

public slots:
    void buttonServerClientSelectClick(QAbstractButton* inButton);
    void buttonClientConnect_clicked(bool inChecked );
    void buttonServerListen_clicked(bool inChecked );
    void onUpdateReceivedText();

private:
    Ui::SocketGUI *ui;
    Comm::UdpServer server;
};

#endif // SOCKETGUI_H
