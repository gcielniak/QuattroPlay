#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

#include <stdint.h>

#include "SDL2/SDL.h"

// Setting to 60 will break debugging ...
#define UI_FPS 30
// Amount of frames to sample for FPS counting
#define UI_FPS_SAMPLES 16

#define UI_NOTICE_TIME 100

//#define FSIZE_X 8
//#define FSIZE_Y 8
#define FCOLUMNS 80
#define FROWS 50

#include "lib.h"

extern int FSIZE_X;
extern int FSIZE_Y;

typedef enum {
    SCR_MAIN = 0,
    SCR_ABOUT,
    SCR_PLAYLIST,
    SCR_SELECT,
    SCR_MAIN2

} screen_mode_t;

enum {
    R_SCR_MAIN = 1<<0,
    R_SCR_ABOUT = 1<<1,
    R_SCR_PLAYLIST = 1<<2,
    R_SCR_SELECT = 1<<3,
    R_SCR_MAIN2 = 1<<4,
};

extern int gameloaded;

extern float vol;
extern screen_t screen;
extern screen_t last_screen;

extern uint32_t lasttick;
extern uint32_t frame_cnt;
extern double fps_cnt;

extern int debug_stat;
extern int draw_count;
extern int rect_count;

extern int returncode;

extern int got_input;
extern SDL_Keycode keycode;
extern int running;

extern int refresh;

extern screen_mode_t screen_mode;
extern screen_mode_t last_scrmode;

extern char ui_notice[FCOLUMNS];
extern int ui_notice_timer;

int ui_main(screen_mode_t);

void scr_main();
void scr_main2();
void scr_about();
void scr_playlist();
void scr_select();

#endif // UI_H_INCLUDED
