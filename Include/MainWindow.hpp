#pragma once

#include <QMainWindow>

class Toolbar;
class Sidebar;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

private:
    void setupUi();
    void setupConnections();

    Toolbar* m_toolbar = nullptr;
    Sidebar* m_sidebar = nullptr;
};
