#include "Sidebar.hpp"
#include <QTabWidget>
#include <QVBoxLayout>

// forward-declare tab headers (include paths resolved by include dirs)
#include "tabs/AutoSeedsTab.hpp"
#include "tabs/AutoGearsTab.hpp"
#include "tabs/AutoCraftingTab.hpp"
#include "tabs/AutoCosmeticsTab.hpp"
#include "tabs/AutoPetEggsTab.hpp"
#include "tabs/ThemesTab.hpp"

Sidebar::Sidebar(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

Sidebar::~Sidebar() = default;

void Sidebar::setupUi()
{
    m_tabs = new QTabWidget(this);

    m_tabs->addTab(new AutoSeedsTab(this), tr("Auto-Seeds"));
    m_tabs->addTab(new AutoGearsTab(this), tr("Auto-Gears"));
    m_tabs->addTab(new AutoCraftingTab(this), tr("Auto-crafting"));
    m_tabs->addTab(new AutoCosmeticsTab(this), tr("Auto-Cosmetics"));
    m_tabs->addTab(new AutoPetEggsTab(this), tr("AutoPetEggs"));
    m_tabs->addTab(new ThemesTab(this), tr("Themes"));

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_tabs);
    setLayout(layout);
}

QTabWidget* Sidebar::tabWidget() const
{
    return m_tabs;
}
