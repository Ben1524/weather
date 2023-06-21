#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QMenu>
#include <QAction>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QLabel>
#include "weatherData.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void contextMenuEvent(QContextMenuEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

    void getWeatherInfo(const QString &weather);

    void parseJson(QByteArray &byteArray);

    bool eventFilter(QObject *object, QEvent *event) override;

    void paintHighCurve();
    void paintLowCurve();

    void upateUi();
    ~MainWindow();
private slots:
    void onReplied(QNetworkReply *reply);
private:
    Ui::MainWindow *ui;
    QMenu *mCloseMenu;
    QAction *mCloseAct,*test;

    QPoint mOffset;

    QNetworkAccessManager *mNetworkAccessManager;

    Today mToday;
    Day mDay[6];

    QList<QLabel*> mDateList;
    QList<QLabel*> mWeekList;

    QList<QLabel*> mTypeList;
    QList<QLabel*> mQulityList;

    QList<QLabel*> mTypeIconList;
    QList<QLabel*> mFxList;
    QList<QLabel*> mFlList;

};
#endif // MAINWINDOW_H
