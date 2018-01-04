/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *serialFrame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *serialPort;
    QComboBox *PortBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *baudRate;
    QComboBox *BaudBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *bitNum;
    QComboBox *BitNumBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *parityBit;
    QComboBox *ParityBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *stopBit;
    QComboBox *StopBox;
    QPushButton *openSerialButton;
    QWidget *mapSetFrame;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Xoffset;
    QSpacerItem *horizontalSpacer;
    QSpinBox *offsetXbox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *Yoffset;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *offsetYbox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mapRatio;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *RatioBox;
    QPushButton *mapSetConfirm;
    QWidget *dataFrame;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *dataPanel;
    QTextEdit *dataReceiver;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1200, 900);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setToolTipDuration(1);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        serialFrame = new QWidget(centralWidget);
        serialFrame->setObjectName(QStringLiteral("serialFrame"));
        serialFrame->setGeometry(QRect(690, 120, 171, 241));
        serialFrame->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(serialFrame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        serialPort = new QLabel(serialFrame);
        serialPort->setObjectName(QStringLiteral("serialPort"));

        horizontalLayout_2->addWidget(serialPort);

        PortBox = new QComboBox(serialFrame);
        PortBox->setObjectName(QStringLiteral("PortBox"));

        horizontalLayout_2->addWidget(PortBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        baudRate = new QLabel(serialFrame);
        baudRate->setObjectName(QStringLiteral("baudRate"));

        horizontalLayout_3->addWidget(baudRate);

        BaudBox = new QComboBox(serialFrame);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));

        horizontalLayout_3->addWidget(BaudBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bitNum = new QLabel(serialFrame);
        bitNum->setObjectName(QStringLiteral("bitNum"));

        horizontalLayout_4->addWidget(bitNum);

        BitNumBox = new QComboBox(serialFrame);
        BitNumBox->setObjectName(QStringLiteral("BitNumBox"));

        horizontalLayout_4->addWidget(BitNumBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        parityBit = new QLabel(serialFrame);
        parityBit->setObjectName(QStringLiteral("parityBit"));

        horizontalLayout_5->addWidget(parityBit);

        ParityBox = new QComboBox(serialFrame);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));

        horizontalLayout_5->addWidget(ParityBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        stopBit = new QLabel(serialFrame);
        stopBit->setObjectName(QStringLiteral("stopBit"));

        horizontalLayout_6->addWidget(stopBit);

        StopBox = new QComboBox(serialFrame);
        StopBox->setObjectName(QStringLiteral("StopBox"));

        horizontalLayout_6->addWidget(StopBox);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout_3);

        openSerialButton = new QPushButton(serialFrame);
        openSerialButton->setObjectName(QStringLiteral("openSerialButton"));

        verticalLayout_2->addWidget(openSerialButton);


        horizontalLayout->addLayout(verticalLayout_2);

        mapSetFrame = new QWidget(centralWidget);
        mapSetFrame->setObjectName(QStringLiteral("mapSetFrame"));
        mapSetFrame->setGeometry(QRect(490, 380, 151, 191));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapSetFrame->sizePolicy().hasHeightForWidth());
        mapSetFrame->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(mapSetFrame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Xoffset = new QLabel(mapSetFrame);
        Xoffset->setObjectName(QStringLiteral("Xoffset"));

        horizontalLayout_7->addWidget(Xoffset);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        offsetXbox = new QSpinBox(mapSetFrame);
        offsetXbox->setObjectName(QStringLiteral("offsetXbox"));

        horizontalLayout_7->addWidget(offsetXbox);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Yoffset = new QLabel(mapSetFrame);
        Yoffset->setObjectName(QStringLiteral("Yoffset"));

        horizontalLayout_8->addWidget(Yoffset);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        offsetYbox = new QSpinBox(mapSetFrame);
        offsetYbox->setObjectName(QStringLiteral("offsetYbox"));

        horizontalLayout_8->addWidget(offsetYbox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        mapRatio = new QLabel(mapSetFrame);
        mapRatio->setObjectName(QStringLiteral("mapRatio"));

        horizontalLayout_9->addWidget(mapRatio);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        RatioBox = new QComboBox(mapSetFrame);
        RatioBox->setObjectName(QStringLiteral("RatioBox"));

        horizontalLayout_9->addWidget(RatioBox);


        verticalLayout_4->addLayout(horizontalLayout_9);

        mapSetConfirm = new QPushButton(mapSetFrame);
        mapSetConfirm->setObjectName(QStringLiteral("mapSetConfirm"));

        verticalLayout_4->addWidget(mapSetConfirm);


        verticalLayout_5->addLayout(verticalLayout_4);

        dataFrame = new QWidget(centralWidget);
        dataFrame->setObjectName(QStringLiteral("dataFrame"));
        dataFrame->setGeometry(QRect(329, 130, 251, 222));
        verticalLayout_6 = new QVBoxLayout(dataFrame);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dataPanel = new QLabel(dataFrame);
        dataPanel->setObjectName(QStringLiteral("dataPanel"));

        verticalLayout->addWidget(dataPanel);

        dataReceiver = new QTextEdit(dataFrame);
        dataReceiver->setObjectName(QStringLiteral("dataReceiver"));
        dataReceiver->setEnabled(true);

        verticalLayout->addWidget(dataReceiver);


        verticalLayout_6->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        mapSetFrame->raise();
        serialFrame->raise();
        dataFrame->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        serialPort->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        baudRate->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        bitNum->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        BitNumBox->clear();
        BitNumBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        parityBit->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
        );
        stopBit->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        openSerialButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        Xoffset->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276X\345\201\217\347\247\273\351\207\217", Q_NULLPTR));
        Yoffset->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276Y\345\201\217\347\247\273\351\207\217", Q_NULLPTR));
        mapRatio->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276\347\274\251\346\224\276\346\257\224\344\276\213", Q_NULLPTR));
        RatioBox->clear();
        RatioBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1.0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
        );
        mapSetConfirm->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        dataPanel->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\347\252\227\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
