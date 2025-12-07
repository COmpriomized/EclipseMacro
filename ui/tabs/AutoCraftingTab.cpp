#include "tabs/AutoCraftingTab.hpp"
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>

AutoCraftingTab::AutoCraftingTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

AutoCraftingTab::~AutoCraftingTab() = default;

void AutoCraftingTab::setupUi()
{
    m_recipeQueue = new QListWidget(this);
    m_addRecipeBtn = new QPushButton(tr("Add Recipe"), this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_recipeQueue);
    layout->addWidget(m_addRecipeBtn);
    layout->addStretch();

    connect(m_addRecipeBtn, &QPushButton::clicked, this, &AutoCraftingTab::queueUpdated);
}
