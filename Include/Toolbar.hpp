#pragma once

#include <QToolBar>

class QAction;
class QLineEdit;

class Toolbar : public QToolBar
{
    Q_OBJECT

public:
    explicit Toolbar(QWidget* parent = nullptr);
    ~Toolbar() override;

signals:
    void startRequested();
    void pauseRequested();
    void stopRequested();

private:
    void setupActions();

    QAction* m_startAction = nullptr;
    QAction* m_pauseAction = nullptr;
    QAction* m_stopAction = nullptr;
    QLineEdit* m_search = nullptr;
};
