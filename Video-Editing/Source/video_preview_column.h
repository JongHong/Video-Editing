#ifndef VIDEO_PREVIEW_COLUMN_H
#define VIDEO_PREVIEW_COLUMN_H

#include <QWidget>
#include <QFrame>

class video_Preview_column : public QWidget
{
    Q_OBJECT
public:
    explicit video_Preview_column(QWidget *parent = 0);
    ~video_Preview_column();

signals:

public slots:
};

#endif // VIDEO_PREVIEW_COLUMN_H
