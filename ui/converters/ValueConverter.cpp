#include "converters/ValueConverter.hpp"
#include <QString>

QString ValueConverter::toDisplay(int value)
{
    return QString::number(value);
}

int ValueConverter::fromDisplay(const QString& text)
{
    bool ok = false;
    int v = text.toInt(&ok);
    return ok ? v : 0;
}
