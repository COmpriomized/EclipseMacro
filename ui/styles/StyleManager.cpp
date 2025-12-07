#include "styles/StyleManager.hpp"
#include "styles/Theme.hpp"
#include <QApplication>
#include <QPalette>

StyleManager& StyleManager::instance()
{
    static StyleManager s;
    return s;
}

StyleManager::StyleManager() = default;

void StyleManager::applyTheme(const Theme& theme)
{
    m_currentTheme = theme.name;
    QPalette pal;
    pal.setColor(QPalette::Window, theme.background);
    pal.setColor(QPalette::WindowText, theme.foreground);
    pal.setColor(QPalette::Highlight, theme.accent);
    qApp->setPalette(pal);
    emit themeChanged(m_currentTheme);
}

QString StyleManager::currentThemeName() const
{
    return m_currentTheme;
}
