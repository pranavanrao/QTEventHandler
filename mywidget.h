#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    virtual bool event(QEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
    // virtual void mouseDoubleClickEvent(QMouseEvent *event) override;
    // virtual void mouseReleaseEvent(QMouseEvent *event) override;
    // virtual void mouseMoveEvent(QMouseEvent *event) override;
};
#endif // MYWIDGET_H
