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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *portLabel;
    QLineEdit *ipReceiveOn;
    QLineEdit *portReceiveOn;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *iPAddressLabel_2;
    QLineEdit *ipRemoteSendTo;
    QLineEdit *portRemoteSendTo;
    QLabel *portLabel_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonServerListen;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
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
        SocketGUI->resize(381, 622);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SocketGUI->sizePolicy().hasHeightForWidth());
        SocketGUI->setSizePolicy(sizePolicy);
        actionExit = new QAction(SocketGUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(SocketGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        portLabel = new QLabel(groupBox_3);
        portLabel->setObjectName(QStringLiteral("portLabel"));
        sizePolicy.setHeightForWidth(portLabel->sizePolicy().hasHeightForWidth());
        portLabel->setSizePolicy(sizePolicy);
        portLabel->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(portLabel, 1, 2, 1, 1);

        ipReceiveOn = new QLineEdit(groupBox_3);
        ipReceiveOn->setObjectName(QStringLiteral("ipReceiveOn"));
        sizePolicy.setHeightForWidth(ipReceiveOn->sizePolicy().hasHeightForWidth());
        ipReceiveOn->setSizePolicy(sizePolicy);
        ipReceiveOn->setMinimumSize(QSize(120, 26));
        ipReceiveOn->setCursorPosition(13);
        ipReceiveOn->setClearButtonEnabled(true);

        gridLayout->addWidget(ipReceiveOn, 1, 1, 1, 1);

        portReceiveOn = new QLineEdit(groupBox_3);
        portReceiveOn->setObjectName(QStringLiteral("portReceiveOn"));
        sizePolicy.setHeightForWidth(portReceiveOn->sizePolicy().hasHeightForWidth());
        portReceiveOn->setSizePolicy(sizePolicy);
        portReceiveOn->setCursorPosition(1);
        portReceiveOn->setClearButtonEnabled(true);

        gridLayout->addWidget(portReceiveOn, 1, 3, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        iPAddressLabel_2 = new QLabel(groupBox_2);
        iPAddressLabel_2->setObjectName(QStringLiteral("iPAddressLabel_2"));
        sizePolicy.setHeightForWidth(iPAddressLabel_2->sizePolicy().hasHeightForWidth());
        iPAddressLabel_2->setSizePolicy(sizePolicy);
        iPAddressLabel_2->setMinimumSize(QSize(0, 26));

        gridLayout_2->addWidget(iPAddressLabel_2, 0, 0, 1, 1);

        ipRemoteSendTo = new QLineEdit(groupBox_2);
        ipRemoteSendTo->setObjectName(QStringLiteral("ipRemoteSendTo"));
        sizePolicy.setHeightForWidth(ipRemoteSendTo->sizePolicy().hasHeightForWidth());
        ipRemoteSendTo->setSizePolicy(sizePolicy);
        ipRemoteSendTo->setMinimumSize(QSize(120, 26));
        ipRemoteSendTo->setCursorPosition(13);
        ipRemoteSendTo->setClearButtonEnabled(true);

        gridLayout_2->addWidget(ipRemoteSendTo, 0, 1, 1, 1);

        portRemoteSendTo = new QLineEdit(groupBox_2);
        portRemoteSendTo->setObjectName(QStringLiteral("portRemoteSendTo"));
        sizePolicy.setHeightForWidth(portRemoteSendTo->sizePolicy().hasHeightForWidth());
        portRemoteSendTo->setSizePolicy(sizePolicy);
        portRemoteSendTo->setCursorPosition(1);
        portRemoteSendTo->setClearButtonEnabled(true);

        gridLayout_2->addWidget(portRemoteSendTo, 0, 3, 1, 1);

        portLabel_2 = new QLabel(groupBox_2);
        portLabel_2->setObjectName(QStringLiteral("portLabel_2"));
        sizePolicy.setHeightForWidth(portLabel_2->sizePolicy().hasHeightForWidth());
        portLabel_2->setSizePolicy(sizePolicy);
        portLabel_2->setMinimumSize(QSize(0, 26));

        gridLayout_2->addWidget(portLabel_2, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout_2->addWidget(frame);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonServerListen = new QPushButton(widget);
        buttonServerListen->setObjectName(QStringLiteral("buttonServerListen"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonServerListen->sizePolicy().hasHeightForWidth());
        buttonServerListen->setSizePolicy(sizePolicy1);
        buttonServerListen->setMinimumSize(QSize(100, 0));
        buttonServerListen->setCheckable(true);

        horizontalLayout->addWidget(buttonServerListen);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textEditSend = new QPlainTextEdit(frame_3);
        textEditSend->setObjectName(QStringLiteral("textEditSend"));
        textEditSend->setAcceptDrops(true);

        verticalLayout_4->addWidget(textEditSend);

        buttonSend = new QPushButton(frame_3);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonSend->sizePolicy().hasHeightForWidth());
        buttonSend->setSizePolicy(sizePolicy3);
        buttonSend->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(buttonSend);


        verticalLayout_2->addWidget(frame_3);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(3);
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
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
        sizePolicy3.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(buttonClear);


        verticalLayout_2->addWidget(frame_2);

        SocketGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SocketGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 381, 24));
        menuSocket_GUI = new QMenu(menuBar);
        menuSocket_GUI->setObjectName(QStringLiteral("menuSocket_GUI"));
        SocketGUI->setMenuBar(menuBar);
        statusBar = new QStatusBar(SocketGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SocketGUI->setStatusBar(statusBar);
        QWidget::setTabOrder(ipReceiveOn, textEditReceive);
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
        groupBox_3->setTitle(QApplication::translate("SocketGUI", "Listening on", 0));
        portLabel->setText(QApplication::translate("SocketGUI", "Port:", 0));
        ipReceiveOn->setInputMask(QApplication::translate("SocketGUI", "009.009.009.009", 0));
        ipReceiveOn->setText(QApplication::translate("SocketGUI", "127.0.0.1", 0));
        portReceiveOn->setInputMask(QApplication::translate("SocketGUI", "00009", 0));
        portReceiveOn->setText(QApplication::translate("SocketGUI", "4001", 0));
        label->setText(QApplication::translate("SocketGUI", "IP Address:", 0));
        groupBox_2->setTitle(QApplication::translate("SocketGUI", "Sending to", 0));
        iPAddressLabel_2->setText(QApplication::translate("SocketGUI", "IP Address:", 0));
        ipRemoteSendTo->setInputMask(QApplication::translate("SocketGUI", "009.009.009.009", 0));
        ipRemoteSendTo->setText(QApplication::translate("SocketGUI", "127.0.0.1", 0));
        portRemoteSendTo->setInputMask(QApplication::translate("SocketGUI", "00009", 0));
        portRemoteSendTo->setText(QApplication::translate("SocketGUI", "4002", 0));
        portLabel_2->setText(QApplication::translate("SocketGUI", "Port:", 0));
        buttonServerListen->setText(QApplication::translate("SocketGUI", "Listen", 0));
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
