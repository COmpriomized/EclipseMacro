#pragma once

#include <QWidget>

class QCheckBox;
class QPushButton;

class AutoPetEggsTab : public QWidget
{
    Q_OBJECT

public:
    explicit AutoPetEggsTab(QWidget* parent = nullptr);
    ~AutoPetEggsTab() override;

signals:
    void enabledChanged(bool);

private:
    void setupUi();

    QCheckBox* m_enabled = nullptr;
    QPushButton* m_hatchNowBtn = nullptr;
};
