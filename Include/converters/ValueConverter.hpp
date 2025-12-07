#pragma once

#include <QString>

class ValueConverter
{
public:
    static QString toDisplay(int value);
    static int fromDisplay(const QString& text);
};
