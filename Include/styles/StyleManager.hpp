#pragma once

#include <QObject>
#include <QString>

class Theme;

class StyleManager : public QObject
{
    Q_OBJECT

public:
    static StyleManager& instance();

    void applyTheme(const Theme& theme);
    QString currentThemeName() const;

signals:
    void themeChanged(const QString& name);

private:
    StyleManager();
    QString m_currentTheme;
};
