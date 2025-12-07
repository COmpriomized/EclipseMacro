#include "tabs/AutoGearsTab.hpp"
#include <QCheckBox>
#include <QComboBox>
#include <QVBoxLayout>

AutoGearsTab::AutoGearsTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

AutoGearsTab::~AutoGearsTab() = default;

void AutoGearsTab::setupUi()
{
    m_enabled = new QCheckBox(tr("Enable Auto-Gears"), this);
    m_gearMode = new QComboBox(this);
    m_gearMode->addItems({tr("Follow"), tr("Path"), tr("Random")});

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_enabled);
    layout->addWidget(m_gearMode);
    layout->addStretch();

    connect(m_enabled, &QCheckBox::toggled, this, &AutoGearsTab::enabledChanged);
}
