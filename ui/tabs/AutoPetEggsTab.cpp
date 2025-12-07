#include "tabs/AutoPetEggsTab.hpp"
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>

AutoPetEggsTab::AutoPetEggsTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

AutoPetEggsTab::~AutoPetEggsTab() = default;

void AutoPetEggsTab::setupUi()
{
    m_enabled = new QCheckBox(tr("Enable AutoPetEggs"), this);
    m_hatchNowBtn = new QPushButton(tr("Hatch Now"), this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_enabled);
    layout->addWidget(m_hatchNowBtn);
    layout->addStretch();

    connect(m_enabled, &QCheckBox::toggled, this, &AutoPetEggsTab::enabledChanged);
}
