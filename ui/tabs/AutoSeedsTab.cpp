#include "tabs/AutoSeedsTab.hpp"
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>

AutoSeedsTab::AutoSeedsTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

AutoSeedsTab::~AutoSeedsTab() = default;

void AutoSeedsTab::setupUi()
{
    m_enabled = new QCheckBox(tr("Enable Auto-Seeds"), this);
    m_addFieldBtn = new QPushButton(tr("+ Add Field"), this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_enabled);
    layout->addWidget(m_addFieldBtn);
    layout->addStretch();

    connect(m_enabled, &QCheckBox::toggled, this, &AutoSeedsTab::enabledChanged);
}
