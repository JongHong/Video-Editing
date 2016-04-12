#ifndef START_ANIMATION_H
#define START_ANIMATION_H

#include <QWidget>
#include <QtWidgets>

class Start_Animation : public QWidget
{
    Q_OBJECT
public:
    explicit Start_Animation(QWidget *parent = 0);
    ~Start_Animation();

private:
     QLabel *label;
signals:

public slots:

protected:

};

#endif // START_ANIMATION_H
