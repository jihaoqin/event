#ifndef LABEL_H
#define LABEL_H
#include <QMouseEvent>
class Label:public QWidget
{
  Q_OBJECT
protected:
  void mousePressEvent(QMouseEvent *event);
}

#endif
