#pragma once

#include <QWidget>

class QTabWidget;

class Sidebar : public QWidget
{
    Q_OBJECT

public:
    explicit Sidebar(QWidget* parent = nullptr);
    ~Sidebar() override;

    QTabWidget* tabWidget() const;

private:
    void setupUi();

    QTabWidget* m_tabs = nullptr;
};
