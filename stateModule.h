#ifndef STATEMODULE_H_
#define STATEMODULE_H_
#pragma once 

typedef enum {
    EXIT,
    LOGO,
} STATE;
struct RESOLUTION{
    short x;
    short y;
};

typedef struct RESOLUTION RESOLUTION;
RESOLUTION _currentRes;
char keyPressed;
#endif