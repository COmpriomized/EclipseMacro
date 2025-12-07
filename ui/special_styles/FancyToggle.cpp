#include "special_styles/FancyToggle.hpp"
#include <QPainter>
#include <QMouseEvent>

FancyToggle::FancyToggle(QWidget* parent)
    : QWidget(parent), m_checked(false)
{
    setFixedSize(48, 24);
}

FancyToggle::~FancyToggle() = default;

bool FancyToggle::isChecked() const
{
    return m_checked;
}

void FancyToggle::setChecked(bool checked)
{
    if (m_checked == checked) return;
    m_checked = checked;
    emit toggled(m_checked);
    update();
}

void FancyToggle::paintEvent(QPaintEvent* /*event*/)
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    QColor bg = m_checked ? QColor("#4caf50") : QColor("#cccccc");
    p.setBrush(bg);
    p.setPen(Qt::NoPen);
    p.drawRoundedRect(rect(), height() / 2.0, height() / 2.0);

    int knobX = m_checked ? width() - height() : 0;
    QRect knobRect(knobX, 0, height(), height());
    p.setBrush(Qt::white);
    p.drawEllipse(knobRect);
}
