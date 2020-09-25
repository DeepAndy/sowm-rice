#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"rofi", "-show", "run",      0};
const char* term[]    = {"xst",             0};
const char* scrot[]   = {"scr",            0};
const char* briup[]   = {"xbacklight", "+", "10", 0};
const char* bridown[] = {"xbacklight", "-", "10", 0};
const char* voldown[] = {"pulsemixer", "--change-volume", "-5",         0};
const char* volup[]   = {"pulsemixer", "--change-volume", "+5",        0};
const char* volmute[] = {"pulsemixer", "--toggle-mute",      0};
const char* colors[]  = {"bud", "/home/goldie/Pictures/Wallpapers", 0};
const char* fmenu[] = {"rofi", "-show", "drun", "-theme", "/home/cf/.config/rofi/rofi/launchers-git/blurry_full.rasi", 0};
const char* lock[] = {"slock", "-m", "Locked: Enter password for user 'cf'", 0};


static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},
    {Mod1Mask, XK_F4,  win_kill,   {0}},

    {MOD,      XK_l,   run, {.com = lock}},
    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},
    {MOD, XK_r,      run, {.com = menu}},
    {MOD, XK_w,      run, {.com = colors}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_space,  run, {.com = fmenu}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},

    {XK_Super_L|Mod1Mask, XK_t, run, {.com = term}},
};

#endif
