#pragma once

#include <QWidget>

class QCheckBox;
class QComboBox;

class AutoGearsTab : public QWidget
{
    Q_OBJECT

public:
    explicit AutoGearsTab(QWidget* parent = nullptr);
    ~AutoGearsTab() override;

signals:
    void enabledChanged(bool);

private:
    void setupUi();

    QCheckBox* m_enabled = nullptr;
    QComboBox* m_gearMode = nullptr;
};
