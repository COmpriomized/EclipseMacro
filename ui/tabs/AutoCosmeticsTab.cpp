#include "tabs/AutoCosmeticsTab.hpp"
#include <QCheckBox>
#include <QListWidget>
#include <QVBoxLayout>

AutoCosmeticsTab::AutoCosmeticsTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

AutoCosmeticsTab::~AutoCosmeticsTab() = default;

void AutoCosmeticsTab::setupUi()
{
    m_enabled = new QCheckBox(tr("Enable Auto-Cosmetics"), this);
    m_cosmeticsList = new QListWidget(this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_enabled);
    layout->addWidget(m_cosmeticsList);
    layout->addStretch();

    connect(m_enabled, &QCheckBox::toggled, this, &AutoCosmeticsTab::enabledChanged);
}
