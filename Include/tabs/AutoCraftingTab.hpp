#pragma once

#include <QWidget>

class QListWidget;
class QPushButton;

class AutoCraftingTab : public QWidget
{
    Q_OBJECT

public:
    explicit AutoCraftingTab(QWidget* parent = nullptr);
    ~AutoCraftingTab() override;

signals:
    void queueUpdated();

private:
    void setupUi();

    QListWidget* m_recipeQueue = nullptr;
    QPushButton* m_addRecipeBtn = nullptr;
};
