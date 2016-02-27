#ifndef SOCKETGUI_H
#define SOCKETGUI_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QRadioButton>
#include <QMessageBox>
#include <QMetaType>
#include <QTextBlock>

#include </home/fuguru/git/UdpServer/udpserver.hpp>
#include </home/fuguru/git/GenericDelegate/GenericDelegate.h>

#include <boost/thread/thread.hpp>

using namespace Comm;

namespace Ui {
class SocketGUI;
}

class SocketGUI : public QMainWindow
{
    Q_OBJECT

public:

    SocketGUI(QWidget *inParent = 0);

    virtual ~SocketGUI();

    void handle_receive(const boost::shared_ptr<std::vector<uint8_t> >& data,
                        const boost::shared_ptr<udp::endpoint>& endpoint);

signals:
    // To communicate with Gui Thread
    // we need to emit a signal
    void updateReceivedText();

public slots:

    void buttonServerClientSelectClick(QAbstractButton* inButton);
    void buttonClientConnect_clicked(bool inChecked );
    void buttonServerListen_clicked(bool inChecked );
    void onUpdateReceivedText();

    void on_buttonSend_clicked(bool inChecked);
    void on_buttonClear_clicked(bool inChecked);

private:

    Ui::SocketGUI *ui;
    /// Delegate to callback method
    Comm::ReceiveCallbackSignature mMethodCallback;
    Comm::UdpServer server;
};

#endif // SOCKETGUI_H
