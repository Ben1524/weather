//
// Created by a1767 on 2023/6/9.
//

#ifndef QTTEMPPROJECT_WEATHERDATA_H
#define QTTEMPPROJECT_WEATHERDATA_H

#include <QString>

struct Today
{
    Today()
    {

    }

    QString date;
    QString city;

    QString ganmao;

    double wendu;

    QString shidu;

    double pm25;
    QString quality;

    QString type;

    QString fx,fl;

    double high;
    double low;
};

struct Day
{
    Day()
    {

    }
    QString date,week;

    QString type;

    double high;
    double low;
    double aqi;

    QString fx,fl;
};




#endif //QTTEMPPROJECT_WEATHERDATA_H
