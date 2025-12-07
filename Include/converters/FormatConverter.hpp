#pragma once

#include <QString>

class FormatConverter
{
public:
    static QString formatTime(int seconds);
    static int parseTime(const QString& text);
};
