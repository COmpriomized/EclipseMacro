#pragma once

#include <QPushButton>

class SpecialButton : public QPushButton
{
    Q_OBJECT

public:
    explicit SpecialButton(const QString& text, QWidget* parent = nullptr);
    ~SpecialButton() override;

    void setAccentColor(const QColor& c);
};
