#include "MainWindow.hpp"
#include "Toolbar.hpp"
#include "Sidebar.hpp"
#include <QWidget>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setupUi();
    setupConnections();
}

MainWindow::~MainWindow() = default;

void MainWindow::setupUi()
{
    m_toolbar = new Toolbar(this);
    m_sidebar = new Sidebar(this);

    QWidget* central = new QWidget(this);
    auto* layout = new QHBoxLayout(central);
    layout->addWidget(m_sidebar);
    // placeholder for main content area
    setCentralWidget(central);

    addToolBar(Qt::TopToolBarArea, m_toolbar);
}

void MainWindow::setupConnections()
{
    // Example: connect toolbar signals to central logic
    connect(m_toolbar, &Toolbar::startRequested, this, [](){ /* start logic */ });
    connect(m_toolbar, &Toolbar::pauseRequested, this, [](){ /* pause logic */ });
    connect(m_toolbar, &Toolbar::stopRequested, this, [](){ /* stop logic */ });
}
