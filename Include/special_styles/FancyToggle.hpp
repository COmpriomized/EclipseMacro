#pragma once

#include <QWidget>

class FancyToggle : public QWidget
{
    Q_OBJECT

public:
    explicit FancyToggle(QWidget* parent = nullptr);
    ~FancyToggle() override;

    bool isChecked() const;
    void setChecked(bool checked);

signals:
    void toggled(bool checked);

private:
    void paintEvent(QPaintEvent* event) override;
    bool m_checked = false;
};
