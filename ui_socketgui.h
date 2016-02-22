/********************************************************************************
** Form generated from reading UI file 'socketgui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCKETGUI_H
#define UI_SOCKETGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SocketGUI
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *iPAddressLabel;
    QLineEdit *ipReceiveOn;
    QLabel *portLabel;
    QLineEdit *portReceiveOn;
    QLabel *iPAddressLabel_2;
    QLineEdit *ipRemoteSendTo;
    QLabel *portLabel_2;
    QLineEdit *portRemoteSendTo;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioMakeServer;
    QRadioButton *radioMakeClient;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonServerListen;
    QPushButton *buttonClientConnect;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *textEditSend;
    QPushButton *buttonSend;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textEditReceive;
    QPushButton *buttonClear;
    QMenuBar *menuBar;
    QMenu *menuSocket_GUI;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SocketGUI)
    {
        if (SocketGUI->objectName().isEmpty())
            SocketGUI->setObjectName(QStringLiteral("SocketGUI"));
        SocketGUI->resize(434, 770);
        actionExit = new QAction(SocketGUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(SocketGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 75));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        iPAddressLabel = new QLabel(widget);
        iPAddressLabel->setObjectName(QStringLiteral("iPAddressLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, iPAddressLabel);

        ipReceiveOn = new QLineEdit(widget);
        ipReceiveOn->setObjectName(QStringLiteral("ipReceiveOn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ipReceiveOn->sizePolicy().hasHeightForWidth());
        ipReceiveOn->setSizePolicy(sizePolicy1);
        ipReceiveOn->setCursorPosition(13);

        formLayout->setWidget(1, QFormLayout::FieldRole, ipReceiveOn);

        portLabel = new QLabel(widget);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, portLabel);

        portReceiveOn = new QLineEdit(widget);
        portReceiveOn->setObjectName(QStringLiteral("portReceiveOn"));
        sizePolicy1.setHeightForWidth(portReceiveOn->sizePolicy().hasHeightForWidth());
        portReceiveOn->setSizePolicy(sizePolicy1);
        portReceiveOn->setCursorPosition(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, portReceiveOn);

        iPAddressLabel_2 = new QLabel(widget);
        iPAddressLabel_2->setObjectName(QStringLiteral("iPAddressLabel_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, iPAddressLabel_2);

        ipRemoteSendTo = new QLineEdit(widget);
        ipRemoteSendTo->setObjectName(QStringLiteral("ipRemoteSendTo"));
        sizePolicy1.setHeightForWidth(ipRemoteSendTo->sizePolicy().hasHeightForWidth());
        ipRemoteSendTo->setSizePolicy(sizePolicy1);
        ipRemoteSendTo->setCursorPosition(13);

        formLayout->setWidget(3, QFormLayout::FieldRole, ipRemoteSendTo);

        portLabel_2 = new QLabel(widget);
        portLabel_2->setObjectName(QStringLiteral("portLabel_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, portLabel_2);

        portRemoteSendTo = new QLineEdit(widget);
        portRemoteSendTo->setObjectName(QStringLiteral("portRemoteSendTo"));
        sizePolicy1.setHeightForWidth(portRemoteSendTo->sizePolicy().hasHeightForWidth());
        portRemoteSendTo->setSizePolicy(sizePolicy1);
        portRemoteSendTo->setCursorPosition(1);

        formLayout->setWidget(4, QFormLayout::FieldRole, portRemoteSendTo);


        gridLayout->addWidget(widget, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioMakeServer = new QRadioButton(frame_3);
        radioMakeServer->setObjectName(QStringLiteral("radioMakeServer"));
        radioMakeServer->setChecked(true);

        horizontalLayout->addWidget(radioMakeServer);

        radioMakeClient = new QRadioButton(frame_3);
        radioMakeClient->setObjectName(QStringLiteral("radioMakeClient"));

        horizontalLayout->addWidget(radioMakeClient);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonServerListen = new QPushButton(frame_3);
        buttonServerListen->setObjectName(QStringLiteral("buttonServerListen"));
        sizePolicy1.setHeightForWidth(buttonServerListen->sizePolicy().hasHeightForWidth());
        buttonServerListen->setSizePolicy(sizePolicy1);
        buttonServerListen->setMinimumSize(QSize(100, 0));
        buttonServerListen->setCheckable(true);

        horizontalLayout_2->addWidget(buttonServerListen);

        buttonClientConnect = new QPushButton(frame_3);
        buttonClientConnect->setObjectName(QStringLiteral("buttonClientConnect"));
        buttonClientConnect->setEnabled(false);
        sizePolicy1.setHeightForWidth(buttonClientConnect->sizePolicy().hasHeightForWidth());
        buttonClientConnect->setSizePolicy(sizePolicy1);
        buttonClientConnect->setMinimumSize(QSize(100, 0));
        buttonClientConnect->setCheckable(true);

        horizontalLayout_2->addWidget(buttonClientConnect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);


        verticalLayout_2->addWidget(frame_3);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEditSend = new QPlainTextEdit(frame);
        textEditSend->setObjectName(QStringLiteral("textEditSend"));
        textEditSend->setAcceptDrops(true);

        verticalLayout_3->addWidget(textEditSend);

        buttonSend = new QPushButton(frame);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));
        sizePolicy1.setHeightForWidth(buttonSend->sizePolicy().hasHeightForWidth());
        buttonSend->setSizePolicy(sizePolicy1);
        buttonSend->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(buttonSend);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEditReceive = new QPlainTextEdit(frame_2);
        textEditReceive->setObjectName(QStringLiteral("textEditReceive"));

        verticalLayout->addWidget(textEditReceive);

        buttonClear = new QPushButton(frame_2);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));
        sizePolicy1.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(buttonClear);


        verticalLayout_2->addWidget(frame_2);

        SocketGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SocketGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 434, 20));
        menuSocket_GUI = new QMenu(menuBar);
        menuSocket_GUI->setObjectName(QStringLiteral("menuSocket_GUI"));
        SocketGUI->setMenuBar(menuBar);
        statusBar = new QStatusBar(SocketGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SocketGUI->setStatusBar(statusBar);
        QWidget::setTabOrder(radioMakeServer, radioMakeClient);
        QWidget::setTabOrder(radioMakeClient, ipReceiveOn);
        QWidget::setTabOrder(ipReceiveOn, portReceiveOn);
        QWidget::setTabOrder(portReceiveOn, buttonServerListen);
        QWidget::setTabOrder(buttonServerListen, buttonClientConnect);
        QWidget::setTabOrder(buttonClientConnect, textEditSend);
        QWidget::setTabOrder(textEditSend, buttonSend);
        QWidget::setTabOrder(buttonSend, textEditReceive);
        QWidget::setTabOrder(textEditReceive, buttonClear);

        menuBar->addAction(menuSocket_GUI->menuAction());
        menuSocket_GUI->addAction(actionExit);

        retranslateUi(SocketGUI);

        QMetaObject::connectSlotsByName(SocketGUI);
    } // setupUi

    void retranslateUi(QMainWindow *SocketGUI)
    {
        SocketGUI->setWindowTitle(QApplication::translate("SocketGUI", "SocketGUI", 0));
        actionExit->setText(QApplication::translate("SocketGUI", "Exit", 0));
        iPAddressLabel->setText(QApplication::translate("SocketGUI", "Listen on:", 0));
        ipReceiveOn->setInputMask(QApplication::translate("SocketGUI", "009.009.009.009", 0));
        ipReceiveOn->setText(QApplication::translate("SocketGUI", "127.0.0.1", 0));
        portLabel->setText(QApplication::translate("SocketGUI", "Port:", 0));
        portReceiveOn->setInputMask(QApplication::translate("SocketGUI", "00009", 0));
        portReceiveOn->setText(QApplication::translate("SocketGUI", "4001", 0));
        iPAddressLabel_2->setText(QApplication::translate("SocketGUI", "Send to:", 0));
        ipRemoteSendTo->setInputMask(QApplication::translate("SocketGUI", "009.009.009.009", 0));
        ipRemoteSendTo->setText(QApplication::translate("SocketGUI", "127.0.0.1", 0));
        portLabel_2->setText(QApplication::translate("SocketGUI", "Port:", 0));
        portRemoteSendTo->setInputMask(QApplication::translate("SocketGUI", "00009", 0));
        portRemoteSendTo->setText(QApplication::translate("SocketGUI", "4002", 0));
        radioMakeServer->setText(QApplication::translate("SocketGUI", "Server", 0));
        radioMakeClient->setText(QApplication::translate("SocketGUI", "Client", 0));
        buttonServerListen->setText(QApplication::translate("SocketGUI", "Listen", 0));
        buttonClientConnect->setText(QApplication::translate("SocketGUI", "Connect", 0));
        buttonSend->setText(QApplication::translate("SocketGUI", "Send", 0));
        buttonClear->setText(QApplication::translate("SocketGUI", "Clear", 0));
        menuSocket_GUI->setTitle(QApplication::translate("SocketGUI", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class SocketGUI: public Ui_SocketGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCKETGUI_H
