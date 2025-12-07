#pragma once

#include <QWidget>

class QCheckBox;
class QListWidget;

class AutoCosmeticsTab : public QWidget
{
    Q_OBJECT

public:
    explicit AutoCosmeticsTab(QWidget* parent = nullptr);
    ~AutoCosmeticsTab() override;

signals:
    void enabledChanged(bool);

private:
    void setupUi();

    QCheckBox* m_enabled = nullptr;
    QListWidget* m_cosmeticsList = nullptr;
};
