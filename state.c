#include <ncurses.h>
#include "stateModule.h"
void errorHandler(err_t new){
    mvprintw(_currentRes.y-1,1,"%s",new.errStr);
    free(new.errStr);
}

