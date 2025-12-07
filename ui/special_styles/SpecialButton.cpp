#include "special_styles/SpecialButton.hpp"
#include <QStyle>
#include <QPainter>

SpecialButton::SpecialButton(const QString& text, QWidget* parent)
    : QPushButton(text, parent)
{
    // default styling hook
}

SpecialButton::~SpecialButton() = default;

void SpecialButton::setAccentColor(const QColor& c)
{
    QString style = QString("QPushButton { background-color: %1; }").arg(c.name());
    setStyleSheet(style);
}
