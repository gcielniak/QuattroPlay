/*
*/
#include "qp.h"

char QP_IniPath[128];
char QP_WavePath[128];
char QP_DataPath[128];

char QP_DragDropPath[256];

QP_Audio *Audio;
QP_Game  *Game;
QP_Audit *Audit;

struct QP_DriverInterface *DriverInterface;

