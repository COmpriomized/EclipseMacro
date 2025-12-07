#include "Toolbar.hpp"
#include <QAction>
#include <QLineEdit>
#include <QToolButton>

Toolbar::Toolbar(QWidget* parent)
    : QToolBar(parent)
{
    setupActions();
}

Toolbar::~Toolbar() = default;

void Toolbar::setupActions()
{
    m_startAction = addAction(tr("Start"));
    m_pauseAction = addAction(tr("Pause"));
    m_stopAction = addAction(tr("Stop"));

    m_search = new QLineEdit(this);
    addWidget(m_search);

    connect(m_startAction, &QAction::triggered, this, &Toolbar::startRequested);
    connect(m_pauseAction, &QAction::triggered, this, &Toolbar::pauseRequested);
    connect(m_stopAction, &QAction::triggered, this, &Toolbar::stopRequested);
}
