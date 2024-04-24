#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{}

MyWidget::~MyWidget()
{
    this->setMouseTracking(true);
}

bool MyWidget::event(QEvent *evt)
{
    if (evt->type() == QEvent::MouseButtonPress) {
        qDebug() << "Base event is recieved" << Qt::endl;
        return QWidget::event(evt);
    } else {
        return true;
    }
}

void MyWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << this->objectName();
    qDebug() << "Mouse Press Event happend" << event->pos() << Qt::endl;
}

// void MyWidget::mouseDoubleClickEvent(QMouseEvent *event)
// {
//     qDebug() << "Mouse Double Click Event happend" << event->pos();
// }

// void MyWidget::mouseMoveEvent(QMouseEvent *event)
// {
//     qDebug() << "Mouse Move Event happend" << event->pos();
// }

// void MyWidget::mouseReleaseEvent(QMouseEvent *event)
// {
//     qDebug() << "Mouse Release Event happend" << event->pos();
// }
