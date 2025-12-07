#pragma once

#include <QWidget>

class QListWidget;
class QPushButton;

class ThemesTab : public QWidget
{
    Q_OBJECT

public:
    explicit ThemesTab(QWidget* parent = nullptr);
    ~ThemesTab() override;

signals:
    void themeApplied(const QString& name);

private:
    void setupUi();

    QListWidget* m_themeList = nullptr;
    QPushButton* m_importBtn = nullptr;
    QPushButton* m_exportBtn = nullptr;
};
