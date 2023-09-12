/*
    QuattroPlay globals
*/
#ifndef QP_H_INCLUDED
#define QP_H_INCLUDED

#define QP_TITLE "QuattroPlay"
#define QP_VERSION "2.0"
#define QP_COPYRIGHT "2016-2017 Ian Karlsson"
#define QP_LICENSE "GPL v2"
#define QP_WEBSITE "https://github.com/superctr/QuattroPlay"

#include "macro.h"

#include "driver.h"
#include "audio.h"
#include "loader.h"
#include "lib/audit.h"

extern char QP_IniPath[128];
extern char QP_WavePath[128];
extern char QP_DataPath[128];

extern char QP_DragDropPath[256];

extern QP_Audio *Audio;
extern QP_Game  *Game;
extern QP_Audit *Audit;

extern struct QP_DriverInterface *DriverInterface;

#endif // QP_H_INCLUDED
