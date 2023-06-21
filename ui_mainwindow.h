/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *lbDate;
    QLineEdit *leCity;
    QPushButton *btnSearch;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbGaoMao;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblQualityIcon;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblQualityTitle;
    QLabel *lblQuality;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbPm25Icon;
    QVBoxLayout *verticalLayout_9;
    QLabel *lbPm25Title;
    QLabel *lbPm25;
    QHBoxLayout *horizontalLayout;
    QLabel *lbWindIcon;
    QVBoxLayout *verticalLayout;
    QLabel *lbWindFx;
    QLabel *lbWindFl;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbShiDuIcon;
    QVBoxLayout *verticalLayout_10;
    QLabel *lbShiDuTitle;
    QLabel *lbShiDu;
    QWidget *widget_4;
    QLabel *lbTypeIcon;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbTemp;
    QLabel *lbCity;
    QLabel *lbLowHigh;
    QLabel *lbType;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QLabel *lblWeek0;
    QLabel *lblWeek1;
    QLabel *lblWeek2;
    QLabel *lblWeek3;
    QLabel *lblWeek4;
    QLabel *lblWeek5;
    QLabel *lblDate0;
    QLabel *lblDate1;
    QLabel *lblDate2;
    QLabel *lblDate3;
    QLabel *lblDate4;
    QLabel *lblDate5;
    QWidget *widget_7;
    QGridLayout *gridLayout_6;
    QLabel *lblTypeIcon0;
    QLabel *lblTypeIcon4;
    QLabel *lblTypeIcon2;
    QLabel *lblTypeIcon1;
    QLabel *lblTypeIcon3;
    QLabel *lblType5;
    QLabel *lblType3;
    QLabel *lblType2;
    QLabel *lblType0;
    QLabel *lblType1;
    QLabel *lblTypeIcon5;
    QLabel *lblType4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblQuality0;
    QLabel *lblQuality1;
    QLabel *lblQuality2;
    QLabel *lblQuality3;
    QLabel *lblQuality4;
    QLabel *lblQuality5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblHighCurve;
    QLabel *lblLowCurve;
    QWidget *widget_10;
    QGridLayout *gridLayout_7;
    QLabel *lblFx0;
    QLabel *lblFx1;
    QLabel *lblFx2;
    QLabel *lblFx3;
    QLabel *lblFx4;
    QLabel *lblFx5;
    QLabel *lblFl0;
    QLabel *lblFl1;
    QLabel *lblFl2;
    QLabel *lblFl3;
    QLabel *lblFl4;
    QLabel *lblFl5;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 444);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 811, 51));
        lbDate = new QLabel(widget_2);
        lbDate->setObjectName(QString::fromUtf8("lbDate"));
        lbDate->setGeometry(QRect(610, 5, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(false);
        font.setKerning(true);
        lbDate->setFont(font);
        lbDate->setAlignment(Qt::AlignCenter);
        lbDate->setOpenExternalLinks(false);
        leCity = new QLineEdit(widget_2);
        leCity->setObjectName(QString::fromUtf8("leCity"));
        leCity->setGeometry(QRect(5, 15, 231, 31));
        leCity->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 25);\n"
"border-radius:10px;\n"
"padding:2px 4px"));
        btnSearch = new QPushButton(widget_2);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setGeometry(QRect(238, 15, 31, 31));
        btnSearch->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color: rgb(0, 253, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearch->setIcon(icon);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(20, 181, 342, 251));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbGaoMao = new QLabel(widget_3);
        lbGaoMao->setObjectName(QString::fromUtf8("lbGaoMao"));
        lbGaoMao->setWordWrap(true);

        verticalLayout_3->addWidget(lbGaoMao);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 156, 255);\n"
"border-radius: 15px"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lblQualityIcon = new QLabel(widget_5);
        lblQualityIcon->setObjectName(QString::fromUtf8("lblQualityIcon"));
        lblQualityIcon->setMinimumSize(QSize(40, 40));
        lblQualityIcon->setMaximumSize(QSize(40, 40));
        QFont font1;
        font1.setPointSize(10);
        lblQualityIcon->setFont(font1);
        lblQualityIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        lblQualityIcon->setScaledContents(true);

        horizontalLayout_10->addWidget(lblQualityIcon);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblQualityTitle = new QLabel(widget_5);
        lblQualityTitle->setObjectName(QString::fromUtf8("lblQualityTitle"));
        lblQualityTitle->setFont(font1);
        lblQualityTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lblQualityTitle);

        lblQuality = new QLabel(widget_5);
        lblQuality->setObjectName(QString::fromUtf8("lblQuality"));
        lblQuality->setFont(font1);
        lblQuality->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lblQuality);


        horizontalLayout_10->addLayout(verticalLayout_11);


        gridLayout_2->addLayout(horizontalLayout_10, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lbPm25Icon = new QLabel(widget_5);
        lbPm25Icon->setObjectName(QString::fromUtf8("lbPm25Icon"));
        lbPm25Icon->setMinimumSize(QSize(40, 40));
        lbPm25Icon->setMaximumSize(QSize(40, 40));
        lbPm25Icon->setFont(font1);
        lbPm25Icon->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        lbPm25Icon->setScaledContents(true);

        horizontalLayout_8->addWidget(lbPm25Icon);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lbPm25Title = new QLabel(widget_5);
        lbPm25Title->setObjectName(QString::fromUtf8("lbPm25Title"));
        lbPm25Title->setFont(font1);
        lbPm25Title->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lbPm25Title);

        lbPm25 = new QLabel(widget_5);
        lbPm25->setObjectName(QString::fromUtf8("lbPm25"));
        lbPm25->setFont(font1);
        lbPm25->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lbPm25);


        horizontalLayout_8->addLayout(verticalLayout_9);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbWindIcon = new QLabel(widget_5);
        lbWindIcon->setObjectName(QString::fromUtf8("lbWindIcon"));
        lbWindIcon->setMinimumSize(QSize(40, 40));
        lbWindIcon->setMaximumSize(QSize(40, 40));
        lbWindIcon->setFont(font1);
        lbWindIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        lbWindIcon->setScaledContents(true);

        horizontalLayout->addWidget(lbWindIcon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbWindFx = new QLabel(widget_5);
        lbWindFx->setObjectName(QString::fromUtf8("lbWindFx"));
        lbWindFx->setFont(font1);
        lbWindFx->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbWindFx);

        lbWindFl = new QLabel(widget_5);
        lbWindFl->setObjectName(QString::fromUtf8("lbWindFl"));
        lbWindFl->setFont(font1);
        lbWindFl->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbWindFl);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lbShiDuIcon = new QLabel(widget_5);
        lbShiDuIcon->setObjectName(QString::fromUtf8("lbShiDuIcon"));
        lbShiDuIcon->setMinimumSize(QSize(40, 40));
        lbShiDuIcon->setMaximumSize(QSize(40, 40));
        lbShiDuIcon->setFont(font1);
        lbShiDuIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        lbShiDuIcon->setScaledContents(true);

        horizontalLayout_9->addWidget(lbShiDuIcon);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lbShiDuTitle = new QLabel(widget_5);
        lbShiDuTitle->setObjectName(QString::fromUtf8("lbShiDuTitle"));
        lbShiDuTitle->setFont(font1);
        lbShiDuTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lbShiDuTitle);

        lbShiDu = new QLabel(widget_5);
        lbShiDu->setObjectName(QString::fromUtf8("lbShiDu"));
        lbShiDu->setFont(font1);
        lbShiDu->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lbShiDu);


        horizontalLayout_9->addLayout(verticalLayout_10);


        gridLayout_2->addLayout(horizontalLayout_9, 1, 0, 1, 1);


        verticalLayout_3->addWidget(widget_5);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(20, 60, 291, 101));
        lbTypeIcon = new QLabel(widget_4);
        lbTypeIcon->setObjectName(QString::fromUtf8("lbTypeIcon"));
        lbTypeIcon->setGeometry(QRect(10, 10, 81, 81));
        lbTypeIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lbTypeIcon->setScaledContents(true);
        lbTypeIcon->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(widget_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 0, 181, 91));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbTemp = new QLabel(layoutWidget);
        lbTemp->setObjectName(QString::fromUtf8("lbTemp"));
        QFont font2;
        font2.setPointSize(40);
        lbTemp->setFont(font2);

        gridLayout->addWidget(lbTemp, 0, 0, 1, 2);

        lbCity = new QLabel(layoutWidget);
        lbCity->setObjectName(QString::fromUtf8("lbCity"));

        gridLayout->addWidget(lbCity, 0, 2, 1, 1);

        lbLowHigh = new QLabel(layoutWidget);
        lbLowHigh->setObjectName(QString::fromUtf8("lbLowHigh"));

        gridLayout->addWidget(lbLowHigh, 1, 1, 1, 2);

        lbType = new QLabel(layoutWidget);
        lbType->setObjectName(QString::fromUtf8("lbType"));

        gridLayout->addWidget(lbType, 1, 0, 1, 1);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(360, 20, 441, 431));
        verticalLayout_12 = new QVBoxLayout(widget_11);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        widget_6 = new QWidget(widget_11);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(6);
        gridLayout_5->setVerticalSpacing(0);
        lblWeek0 = new QLabel(widget_6);
        lblWeek0->setObjectName(QString::fromUtf8("lblWeek0"));
        lblWeek0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek0, 0, 0, 1, 1);

        lblWeek1 = new QLabel(widget_6);
        lblWeek1->setObjectName(QString::fromUtf8("lblWeek1"));
        lblWeek1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek1, 0, 1, 1, 1);

        lblWeek2 = new QLabel(widget_6);
        lblWeek2->setObjectName(QString::fromUtf8("lblWeek2"));
        lblWeek2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek2, 0, 2, 1, 1);

        lblWeek3 = new QLabel(widget_6);
        lblWeek3->setObjectName(QString::fromUtf8("lblWeek3"));
        lblWeek3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek3, 0, 3, 1, 1);

        lblWeek4 = new QLabel(widget_6);
        lblWeek4->setObjectName(QString::fromUtf8("lblWeek4"));
        lblWeek4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek4, 0, 4, 1, 1);

        lblWeek5 = new QLabel(widget_6);
        lblWeek5->setObjectName(QString::fromUtf8("lblWeek5"));
        lblWeek5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblWeek5, 0, 5, 1, 1);

        lblDate0 = new QLabel(widget_6);
        lblDate0->setObjectName(QString::fromUtf8("lblDate0"));
        lblDate0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate0, 1, 0, 1, 1);

        lblDate1 = new QLabel(widget_6);
        lblDate1->setObjectName(QString::fromUtf8("lblDate1"));
        lblDate1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate1, 1, 1, 1, 1);

        lblDate2 = new QLabel(widget_6);
        lblDate2->setObjectName(QString::fromUtf8("lblDate2"));
        lblDate2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate2, 1, 2, 1, 1);

        lblDate3 = new QLabel(widget_6);
        lblDate3->setObjectName(QString::fromUtf8("lblDate3"));
        lblDate3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate3, 1, 3, 1, 1);

        lblDate4 = new QLabel(widget_6);
        lblDate4->setObjectName(QString::fromUtf8("lblDate4"));
        lblDate4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate4, 1, 4, 1, 1);

        lblDate5 = new QLabel(widget_6);
        lblDate5->setObjectName(QString::fromUtf8("lblDate5"));
        lblDate5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblDate5, 1, 5, 1, 1);


        verticalLayout_12->addWidget(widget_6);

        widget_7 = new QWidget(widget_11);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_6 = new QGridLayout(widget_7);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(-1, 5, -1, 5);
        lblTypeIcon0 = new QLabel(widget_7);
        lblTypeIcon0->setObjectName(QString::fromUtf8("lblTypeIcon0"));
        lblTypeIcon0->setMinimumSize(QSize(0, 0));
        lblTypeIcon0->setMaximumSize(QSize(1000, 1000));
        lblTypeIcon0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblTypeIcon0->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon0, 0, 0, 1, 1);

        lblTypeIcon4 = new QLabel(widget_7);
        lblTypeIcon4->setObjectName(QString::fromUtf8("lblTypeIcon4"));
        lblTypeIcon4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon4, 0, 4, 1, 1);

        lblTypeIcon2 = new QLabel(widget_7);
        lblTypeIcon2->setObjectName(QString::fromUtf8("lblTypeIcon2"));
        lblTypeIcon2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon2, 0, 2, 1, 1);

        lblTypeIcon1 = new QLabel(widget_7);
        lblTypeIcon1->setObjectName(QString::fromUtf8("lblTypeIcon1"));
        lblTypeIcon1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoYu.png")));
        lblTypeIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon1, 0, 1, 1, 1);

        lblTypeIcon3 = new QLabel(widget_7);
        lblTypeIcon3->setObjectName(QString::fromUtf8("lblTypeIcon3"));
        lblTypeIcon3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon3, 0, 3, 1, 1);

        lblType5 = new QLabel(widget_7);
        lblType5->setObjectName(QString::fromUtf8("lblType5"));
        lblType5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType5, 1, 5, 1, 1);

        lblType3 = new QLabel(widget_7);
        lblType3->setObjectName(QString::fromUtf8("lblType3"));
        lblType3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType3, 1, 3, 1, 1);

        lblType2 = new QLabel(widget_7);
        lblType2->setObjectName(QString::fromUtf8("lblType2"));
        lblType2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType2, 1, 2, 1, 1);

        lblType0 = new QLabel(widget_7);
        lblType0->setObjectName(QString::fromUtf8("lblType0"));
        lblType0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType0, 1, 0, 1, 1);

        lblType1 = new QLabel(widget_7);
        lblType1->setObjectName(QString::fromUtf8("lblType1"));
        lblType1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType1, 1, 1, 1, 1);

        lblTypeIcon5 = new QLabel(widget_7);
        lblTypeIcon5->setObjectName(QString::fromUtf8("lblTypeIcon5"));
        lblTypeIcon5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblTypeIcon5, 0, 5, 1, 1);

        lblType4 = new QLabel(widget_7);
        lblType4->setObjectName(QString::fromUtf8("lblType4"));
        lblType4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lblType4, 1, 4, 1, 1);


        verticalLayout_12->addWidget(widget_7);

        widget_9 = new QWidget(widget_11);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("border-radius: 4px"));
        horizontalLayout_11 = new QHBoxLayout(widget_9);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 5, -1, 5);
        lblQuality0 = new QLabel(widget_9);
        lblQuality0->setObjectName(QString::fromUtf8("lblQuality0"));
        lblQuality0->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;"));
        lblQuality0->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality0);

        lblQuality1 = new QLabel(widget_9);
        lblQuality1->setObjectName(QString::fromUtf8("lblQuality1"));
        lblQuality1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        lblQuality1->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality1);

        lblQuality2 = new QLabel(widget_9);
        lblQuality2->setObjectName(QString::fromUtf8("lblQuality2"));
        lblQuality2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        lblQuality2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality2);

        lblQuality3 = new QLabel(widget_9);
        lblQuality3->setObjectName(QString::fromUtf8("lblQuality3"));
        lblQuality3->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        lblQuality3->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality3);

        lblQuality4 = new QLabel(widget_9);
        lblQuality4->setObjectName(QString::fromUtf8("lblQuality4"));
        lblQuality4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lblQuality4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality4);

        lblQuality5 = new QLabel(widget_9);
        lblQuality5->setObjectName(QString::fromUtf8("lblQuality5"));
        lblQuality5->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        lblQuality5->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality5);


        verticalLayout_12->addWidget(widget_9);

        widget_8 = new QWidget(widget_11);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_2 = new QVBoxLayout(widget_8);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 5, -1, 5);
        lblHighCurve = new QLabel(widget_8);
        lblHighCurve->setObjectName(QString::fromUtf8("lblHighCurve"));
        lblHighCurve->setMinimumSize(QSize(0, 80));
        lblHighCurve->setMaximumSize(QSize(10000, 10000));
        lblHighCurve->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60,60);"));
        lblHighCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblHighCurve);

        lblLowCurve = new QLabel(widget_8);
        lblLowCurve->setObjectName(QString::fromUtf8("lblLowCurve"));
        lblLowCurve->setMinimumSize(QSize(0, 80));
        lblLowCurve->setMaximumSize(QSize(10000, 10000));
        lblLowCurve->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60,60);"));
        lblLowCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblLowCurve);


        verticalLayout_12->addWidget(widget_8);

        widget_10 = new QWidget(widget_11);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_7 = new QGridLayout(widget_10);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(0);
        lblFx0 = new QLabel(widget_10);
        lblFx0->setObjectName(QString::fromUtf8("lblFx0"));
        lblFx0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx0, 0, 0, 1, 1);

        lblFx1 = new QLabel(widget_10);
        lblFx1->setObjectName(QString::fromUtf8("lblFx1"));
        lblFx1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx1, 0, 1, 1, 1);

        lblFx2 = new QLabel(widget_10);
        lblFx2->setObjectName(QString::fromUtf8("lblFx2"));
        lblFx2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx2, 0, 2, 1, 1);

        lblFx3 = new QLabel(widget_10);
        lblFx3->setObjectName(QString::fromUtf8("lblFx3"));
        lblFx3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx3, 0, 3, 1, 1);

        lblFx4 = new QLabel(widget_10);
        lblFx4->setObjectName(QString::fromUtf8("lblFx4"));
        lblFx4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx4, 0, 4, 1, 1);

        lblFx5 = new QLabel(widget_10);
        lblFx5->setObjectName(QString::fromUtf8("lblFx5"));
        lblFx5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFx5, 0, 5, 1, 1);

        lblFl0 = new QLabel(widget_10);
        lblFl0->setObjectName(QString::fromUtf8("lblFl0"));
        lblFl0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl0->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl0, 1, 0, 1, 1);

        lblFl1 = new QLabel(widget_10);
        lblFl1->setObjectName(QString::fromUtf8("lblFl1"));
        lblFl1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl1->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl1, 1, 1, 1, 1);

        lblFl2 = new QLabel(widget_10);
        lblFl2->setObjectName(QString::fromUtf8("lblFl2"));
        lblFl2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl2->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl2, 1, 2, 1, 1);

        lblFl3 = new QLabel(widget_10);
        lblFl3->setObjectName(QString::fromUtf8("lblFl3"));
        lblFl3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl3->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl3, 1, 3, 1, 1);

        lblFl4 = new QLabel(widget_10);
        lblFl4->setObjectName(QString::fromUtf8("lblFl4"));
        lblFl4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl4, 1, 4, 1, 1);

        lblFl5 = new QLabel(widget_10);
        lblFl5->setObjectName(QString::fromUtf8("lblFl5"));
        lblFl5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(lblFl5, 1, 5, 1, 1);


        verticalLayout_12->addWidget(widget_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbDate->setText(QCoreApplication::translate("MainWindow", "2022/11/26 \346\230\237\346\234\237\345\205\255", nullptr));
        leCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\237\216\345\270\202", nullptr));
        btnSearch->setText(QString());
        lbGaoMao->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblQualityIcon->setText(QString());
        lblQualityTitle->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblQuality->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lbPm25Icon->setText(QString());
        lbPm25Title->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lbPm25->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lbWindIcon->setText(QString());
        lbWindFx->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lbWindFl->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lbShiDuIcon->setText(QString());
        lbShiDuTitle->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        lbShiDu->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lbTypeIcon->setText(QString());
        lbTemp->setText(QCoreApplication::translate("MainWindow", "32\342\204\203", nullptr));
        lbCity->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        lbLowHigh->setText(QCoreApplication::translate("MainWindow", "19\342\204\203~32\342\204\203", nullptr));
        lbType->setText(QCoreApplication::translate("MainWindow", "\346\231\264\345\244\251", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        lblDate0->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lblDate1->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        lblDate2->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        lblDate3->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        lblDate4->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        lblDate5->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        lblTypeIcon0->setText(QString());
        lblTypeIcon4->setText(QString());
        lblTypeIcon2->setText(QString());
        lblTypeIcon1->setText(QString());
        lblTypeIcon3->setText(QString());
        lblType5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblType2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblType0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblTypeIcon5->setText(QString());
        lblType4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblQuality0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQuality1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQuality2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQuality3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblQuality4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQuality5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblHighCurve->setText(QString());
        lblLowCurve->setText(QString());
        lblFx0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblFx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblFx2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx3->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lblFl0->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl1->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblFl2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl3->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
