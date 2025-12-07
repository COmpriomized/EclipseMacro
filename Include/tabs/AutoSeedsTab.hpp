#pragma once

#include <QWidget>

class QPushButton;
class QCheckBox;

class AutoSeedsTab : public QWidget
{
    Q_OBJECT

public:
    explicit AutoSeedsTab(QWidget* parent = nullptr);
    ~AutoSeedsTab() override;

signals:
    void enabledChanged(bool);

private:
    void setupUi();

    QCheckBox* m_enabled = nullptr;
    QPushButton* m_addFieldBtn = nullptr;
};
