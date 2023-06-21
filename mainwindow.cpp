#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMap>
#include <QPainter>
#include "tool.h"

QMap<QString,QString> mTypeMap;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800,450);
    this->setWindowFlag(Qt::FramelessWindowHint);

    mCloseMenu = new QMenu(this);
    mCloseAct =new QAction(this);

    test = new QAction(this);

    test->setText("继续");


    mCloseAct->setText("退出");
    mCloseAct->setIcon(QIcon(":/res/close.png"));

    mCloseMenu->addAction(mCloseAct);
    mCloseMenu->addAction(test);




    connect(mCloseAct,&QAction::triggered,this,[=]{
        qApp->exit(0);
    });

    mNetworkAccessManager=new QNetworkAccessManager(this);
    connect(mNetworkAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);


    mDateList << ui->lblDate0 << ui->lblDate1 << ui->lblDate2 << ui->lblDate3 << ui->lblDate4 << ui->lblDate5;
    mWeekList << ui->lblWeek0 << ui->lblWeek1 << ui->lblWeek2 << ui->lblWeek3 << ui->lblWeek4 << ui->lblWeek5;
    mQulityList << ui->lblQuality0 << ui->lblQuality1 << ui->lblQuality2 << ui->lblQuality3 << ui->lblQuality4 << ui->lblQuality5;
    mTypeList << ui->lblType0 << ui->lblType1 << ui->lblType2 << ui->lblType3 << ui->lblType4 << ui->lblType5;
    mTypeIconList << ui->lblTypeIcon0 << ui->lblTypeIcon1 << ui->lblTypeIcon2 << ui->lblTypeIcon3 << ui->lblTypeIcon4 << ui->lblTypeIcon5;
    mFxList << ui->lblFx0 << ui->lblFx1 << ui->lblFx2 << ui->lblFx3 << ui->lblFx4 << ui->lblFx5;
    mFlList << ui->lblFl0 << ui->lblFl1 << ui->lblFl2 << ui->lblFl3 << ui->lblFl4 << ui->lblFl5;

    // 获取当前城市位置
    getWeatherInfo("合肥");


     //根据keys,设置icon的路径
    mTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨",":/res/type/BaoYu. png");
    mTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪",":/res/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪",":/res/type/DaXue.png");
    mTypeMap.insert("大雨",":/res/type/DaYu.png");
    mTypeMap.insert("冻雨",":/res/type/DongYu.png");
    mTypeMap.insert("多云",":/res/type/DuoYun.png");
    mTypeMap.insert("浮沉",":/res/type/FuChen.png");
    mTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/res/type/Wu.png");
    mTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    mTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    mTypeMap.insert("雪",":/res/type/Xue.png");
    mTypeMap.insert("扬沙",":/res/type/YangSha.png");
    mTypeMap.insert("阴",":/res/type/Yin.png");
    mTypeMap.insert("雨",":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/res/type/ZhongYu.png");
    //关联信号槽
    connect(ui->btnSearch,&QPushButton::clicked,[=]
    {
        QString ss=ui->leCity->text();
        getWeatherInfo(ss);
        paintHighCurve();
    });

    paintHighCurve();

}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    mCloseMenu->exec(QCursor::pos());
    event ->accept();// 事件接受,不再继续执行
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset=event->globalPos()-this->pos(); // 计算按下位置与左上角的偏移量
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - mOffset);
    // 移动位置
}

void MainWindow::onReplied(QNetworkReply *reply)
{
    qDebug() << "success";

    int status_code=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug() << "opreation:"<<reply->operation();
    qDebug() << "status_code:"<<status_code;
    qDebug() << "url: "<<reply ->url();
    qDebug() << "raw header:"<<reply->rawHeaderList();

    if(reply ->error()!=QNetworkReply::NoError||status_code!=200)
    {
        qDebug() << reply->errorString().toLatin1().data();

        QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
    }
    else
    {
        QByteArray buffer=reply->readAll();
        qDebug()<<buffer.data();

        parseJson(buffer);
    }

    reply->deleteLater();


}

void MainWindow::getWeatherInfo(const QString &city)
{
    QString ss=weatherTool::getCode(city);
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+ss);
    mNetworkAccessManager->get(QNetworkRequest(url));
}

void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray);
    if(err.error!=QJsonParseError::NoError)
        return;

    QJsonObject rootObj=doc.object();

    //1.解析日期和城市
    mToday.date=rootObj.value("date").toString();
    mToday.city=rootObj.value("cityInfo").toObject().value("city").toString();

    // 2.解析昨天
    QJsonObject objData = rootObj.value("data").toObject();
    QJsonObject yesData = objData.value("yesterday").toObject();

    mDay[0].week=yesData.value("week").toString();
    mDay[0].type=yesData.value("type").toString();
    mDay[0].fx=yesData.value("fx").toString();
    mDay[0].fl=yesData.value("fl").toString();

    QString s;
    s=yesData.value("high").toString().split(" ").at(1);
    mDay[0].high=s.left(s.length()-1).toDouble();
    s=yesData.value("low").toString().split(" ").at(1);
    mDay[0].low=s.left(s.length()-1).toDouble();
    // s.left()返回字符串左边的n个字符
    mDay[0].date="2023-06-"+yesData.value("date").toString();
    mDay[0].aqi=yesData.value("aqi").toDouble();

    QJsonArray arr = objData.value("forecast").toArray();

    for(int i=0;i<5;i++)
    {
        QJsonObject obj = arr.at(i).toObject();
        mDay[i+1].week=obj.value("week").toString();
        mDay[i+1].type=obj.value("type").toString();
        mDay[i+1].fx=obj.value("fx").toString();
        mDay[i+1].fl=obj.value("fl").toString();

        QString s;
        s=obj.value("high").toString().split(" ").at(1);
        mDay[i+1].high=s.left(s.length()-1).toDouble();
        s=obj.value("low").toString().split(" ").at(1);
        mDay[i+1].low=s.left(s.length()-1).toDouble();
        // s.left()返回字符串左边的n个字符
        mDay[i+1].date=obj.value("ymd").toString();
        mDay[i+1].aqi=obj.value("aqi").toDouble();
    }

    // 3.解析今天
    mToday.ganmao=objData.value("ganmao").toString();
    mToday.wendu=objData.value("wendu").toString().toDouble();
    mToday.shidu=objData.value("shidu").toString();
    mToday.pm25=objData.value("pm25").toDouble();
    mToday.quality=objData.value("quality").toString();

    // 从第一个数组元素解析
    mToday.type=mDay[1].type;
    mToday.fx=mDay[1].fx;
    mToday.fl=mDay[1].fl;

    mToday.high=mDay[1].high;
    mToday.low=mDay[1].low;

    // 4.更新UI
    upateUi();

}

int checkedQulity(int aqi)
{
    if (aqi >= 0 && aqi <= 50) {
        return 1;
    }else if(aqi > 50 && aqi <= 100){
        return 2;
    }else if(aqi > 100 && aqi <= 150){
        return 3;
    }else if(aqi > 150 && aqi <= 200){
        return 4;
    }else if(aqi > 200 && aqi <= 250){
        return 5;
    }else{
        return 6;
    }
    return -1;
}

void MainWindow::upateUi()
{
     //更新今天的数据
    QString changeStr = QDateTime::fromString(mToday.date, "yyyyMMdd").toString("yyyy/MM/dd");
    auto font=ui->lbDate->font();
    font.setPointSize(20);
    ui->lbDate->setFont(font);

    ui->lbDate->setText(changeStr + " " + mDay[1].week);
    ui->lbCity->setText(mToday.city);
    ui->lbPm25->setText(QString::number(mToday.pm25));
    ui->lbLowHigh->setText(QString::number(mToday.low) + "℃" + "~" + QString::number(mToday.high) + "℃" );
    ui->lbGaoMao->setText(mToday.ganmao);
    ui->lbShiDu->setText(mToday.shidu);
    ui->lblQuality ->setText(QString::number(mDay[1].aqi));
    ui->lbWindFx->setText(mToday.fx);
    ui->lbWindFl->setText(mToday.fl);
    ui->lbTemp->setText(QString::number(mToday.wendu) + "℃");
    //更新icon
    ui->lbTypeIcon->setPixmap(mTypeMap[mToday.type]);
    //qDebug() << mToday.type;
    //更新未来几天的数据
    for (int i = 0; i < 6; ++i) {
        //星期
        mWeekList[i]->setText("周" + mDay[i].week.right(1));
        mWeekList[0]->setText("昨天");
        mWeekList[1]->setText("今天");
        mWeekList[2]->setText("明天");
        //日期
        QStringList ymdList = mDay[i].date.split("-");
        auto ss=ymdList[1]+"/"+ymdList[2];
        mDateList[i]->setText(ss);
        //空气质量
        switch (checkedQulity(mDay[i].aqi)) {
        case 1:
            mQulityList[i]->setText("优");
            mQulityList[i]->setStyleSheet("background-color: rgb(121,184,0);");
            break;
        case 2:
            mQulityList[i]->setText("良");
            mQulityList[i]->setStyleSheet("background-color: rgb(255,187,23);");
            break;
        case 3:
            mQulityList[i]->setText("轻度");
            mQulityList[i]->setStyleSheet("background-color: rgb(255,87,97);");
            break;
        case 4:
            mQulityList[i]->setText("中度");
            mQulityList[i]->setStyleSheet("background-color: rgb(235,17,27);");
            break;
        case 5:
            mQulityList[i]->setText("重度");
            mQulityList[i]->setStyleSheet("background-color: rgb(170,0,0);");
            break;
        case 6:
            mQulityList[i]->setText("严重");
            mQulityList[i]->setStyleSheet("background-color: rgb(110,0,0);");
            break;
        }
        //风向,风力
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);
        //天气类型和天气类型的Icon
        mTypeIconList[i]->setPixmap(mTypeMap[mDay[i].type]);
        mTypeList[i]->setText(mDay[i].type);
    }
    //更新曲线图



}

bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
    if(object==ui->lblHighCurve&&event->type()==QEvent::Paint)
        paintHighCurve();
    if(object==ui->lblLowCurve&&event->type()==QEvent::Paint)
        paintLowCurve();
    return QWidget::eventFilter(object,event); // 最后将事件交给上层对话框
}

void MainWindow::paintHighCurve()
{
    QPainter painter(ui-> lblHighCurve);

    painter.setRenderHint(QPainter::Antialiasing,true);

    int pointX[6]={0};
    for(int i=0;i<6;i++)
    {
        pointX[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }

    int avg=0,sum=0;
    for(int i = 0; i < 6; i++)
    {
        sum+=mDay[i].high;
    }
    avg=sum/6;

    int pointY[6]={0},center=ui->lblHighCurve->height()/2;
    for(int i=0;i<6;i++)
    {
        pointY[i]=center-((mDay[i].high-avg)*3)+ui->lblHighCurve->pos().y();
    }
    QPen pen=painter.pen();

    pen.setWidth(1);
    pen.setColor(QColor(255,170,0));

    painter.setPen(pen);
    painter.setBrush(QColor(255,170,0));

    for(int i=0;i<6;i++)
    {
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),3,3);
        painter.drawText(pointX[i]-6,pointY[i]-6,QString::number(mDay[i].high));
    }
    for (int i = 0; i < 5; i++)
    {
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }
}

void MainWindow::paintLowCurve()
{

}

