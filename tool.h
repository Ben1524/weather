#ifndef TOOL_H
#define TOOL_H

#include <QMap>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>

class weatherTool
{
private:
    static QMap<QString,QString> cityCode;
    static void initMap()
    {
        QString filepath="E:\\QtProjects\\weather\\citycode.json";

        QFile fp(filepath);

        fp.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray json=fp.readAll();
        fp.close();

        QJsonParseError err;

        QJsonDocument doc=QJsonDocument::fromJson(json,&err);

        if(err.error!=QJsonParseError::NoError||!doc.isArray())
            return;

        QJsonArray cities=doc.array();

        for(int i=0;i<cities.size();i++)
        {
            QString c=cities[i].toObject().value("city_name").toString();
            QString code=cities[i].toObject().value("city_code").toString();

            if(code.size()>0)
            {
                cityCode.insert(c,code);
            }

        }
    }
public:
    static QString getCode(const QString&cityName)
    {
        if(cityCode.isEmpty())
               initMap();


       if(cityCode.find(cityName)==cityCode.end())
       {
           if(cityCode.find(cityName+"市")==cityCode.end())
               return "";
           else
               return cityCode[cityName+"市"];
       }
        else
           return cityCode[cityName];

    }
};

QMap<QString,QString> weatherTool::cityCode{};

#endif // TOOL_H
