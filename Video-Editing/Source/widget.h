#ifndef WIDGET_H
#define WIDGET_H

#include "video_title.h"
#include "video_function_rotten.h"
#include "video_options.h"
#include "video_play_bar.h"
#include "video_preview_column.h"
#include "start_animation.h"
#include "video_menubar.h"
#include "video_setting_column.h"
#include "video_effects_column.h"
#include "video_hidebar.h"
#include "video_forward_pause_bar.h"
#include "video_player_interface.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>
#include <QDebug>
#include <QtWidgets>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
private:
    QPalette palette;
    QPoint m_DragPosition;
    bool m_Drag;
};

#endif // WIDGET_H
