#ifndef STATEMODULE_H_
#define STATEMODULE_H_
#pragma once 

typedef enum {
    EXIT,
    LOGO,
    WORK,
    ERROR,
} STATE;
struct RESOLUTION{
    short x;
    short y;
};
struct err_t
{   
    short level;
    char* errStr;
};
typedef struct err_t err_t;
typedef struct RESOLUTION RESOLUTION;
RESOLUTION _currentRes;
char keyPressed;

void errorHandler(err_t);
#endif