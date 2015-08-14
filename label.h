#ifndef LABEL_H
#define LABEL_H
#include <QMouseEvent>
#include <QEvent>
class Label:public QWidget
{
  Q_OBJECT
protected:
  void mousePressEvent(QMouseEvent *event);
  bool event(QEvent *e);
}

#endif
