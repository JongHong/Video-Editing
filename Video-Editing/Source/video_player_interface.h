#ifndef VIDEO_PLAYER_INTERFACE_H
#define VIDEO_PLAYER_INTERFACE_H

#include <QWidget>

class video_player_interface : public QWidget
{
    Q_OBJECT
public:
    explicit video_player_interface(QWidget *parent = 0);
    ~video_player_interface();

signals:

public slots:
};

#endif // VIDEO_PLAYER_INTERFACE_H
