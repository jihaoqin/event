#include "label.h"


void Label::mousePressEvent(QMousePressEvent *event)
{
  qDebug()<<"QLabel::mousePressEvent";
}

bool Label::event(QEvent *e)
{
  return QWidget::event(e);
}
