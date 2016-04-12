#ifndef VIDEO_FORWARD_PAUSE_BAR_H
#define VIDEO_FORWARD_PAUSE_BAR_H

#include <QWidget>

class video_forward_pause_bar : public QWidget
{
    Q_OBJECT
public:
    explicit video_forward_pause_bar(QWidget *parent = 0);
    ~video_forward_pause_bar();

signals:

public slots:
};

#endif // VIDEO_FORWARD_PAUSE_BAR_H
