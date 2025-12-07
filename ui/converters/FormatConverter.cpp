#include "converters/FormatConverter.hpp"
#include <QStringList>

QString FormatConverter::formatTime(int seconds)
{
    int mins = seconds / 60;
    int secs = seconds % 60;
    return QString("%1:%2").arg(mins).arg(secs, 2, 10, QChar('0'));
}

int FormatConverter::parseTime(const QString& text)
{
    QStringList parts = text.split(':');
    if (parts.size() == 2) {
        bool ok1 = false;
        bool ok2 = false;
        int mins = parts[0].toInt(&ok1);
        int secs = parts[1].toInt(&ok2);
        if (ok1 && ok2) return mins * 60 + secs;
    }
    return 0;
}
