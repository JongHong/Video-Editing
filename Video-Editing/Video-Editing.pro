#-------------------------------------------------
#
# Project created by QtCreator 2016-03-31T17:29:49
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Video-Editing
TEMPLATE = app


SOURCES += Source/main.cpp \
           Source/widget.cpp \
           Source/start_animation.cpp \
    Source/video_title.cpp \
    Source/video_function_rotten.cpp \
    Source/video_options.cpp \
    Source/video_play_bar.cpp \
    Source/video_preview_column.cpp \
    Source/video_menubar.cpp \
    Source/video_setting_column.cpp \
    Source/video_effects_column.cpp \
    Source/video_hidebar.cpp \
    Source/video_player_interface.cpp \
    Source/video_forward_pause_bar.cpp

HEADERS  += Source/widget.h \
            Source/start_animation.h \
    Source/video_title.h \
    Source/video_function_rotten.h \
    Source/video_options.h \
    Source/video_play_bar.h \
    Source/video_preview_column.h \
    Source/video_menubar.h \
    Source/video_setting_column.h \
    Source/video_effects_column.h \
    Source/video_hidebar.h \
    Source/video_player_interface.h \
    Source/video_forward_pause_bar.h

RESOURCES += \
    image.qrc


