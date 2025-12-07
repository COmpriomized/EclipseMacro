#include "tabs/ThemesTab.hpp"
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>

ThemesTab::ThemesTab(QWidget* parent)
    : QWidget(parent)
{
    setupUi();
}

ThemesTab::~ThemesTab() = default;

void ThemesTab::setupUi()
{
    m_themeList = new QListWidget(this);
    m_importBtn = new QPushButton(tr("Import Theme"), this);
    m_exportBtn = new QPushButton(tr("Export Theme"), this);

    auto* layout = new QVBoxLayout(this);
    layout->addWidget(m_themeList);
    layout->addWidget(m_importBtn);
    layout->addWidget(m_exportBtn);
    layout->addStretch();

    connect(m_themeList, &QListWidget::itemActivated, this, [this](QListWidgetItem* item){
        if (item) emit themeApplied(item->text());
    });
}
