#ifndef VIDEO_PLAY_BAR_H
#define VIDEO_PLAY_BAR_H

#include <QWidget>

class video_play_bar : public QWidget
{
    Q_OBJECT
public:
    explicit video_play_bar(QWidget *parent = 0);
    ~video_play_bar();

signals:

public slots:
};

#endif // VIDEO_PLAY_BAR_H
