#include "stateModule.h"
#include "fileHandler.h"
#include "boolType.h"
#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    err_t new;
    initscr();
    keypad(stdscr, TRUE);
    savetty();
    cbreak();
    noecho();
    timeout(0);
    leaveok(stdscr, TRUE);
    curs_set(0);

    if (!has_colors()) {
        endwin();
        printf("Your terminal does not support color\n");
    }
    STATE _current=WORK;
    
    if(!startCHK()){
        if(!gettingStarted())
        _current=ERROR;
        new.errStr=(char*)malloc(strlen("error while creating and loading cfg file"));  //error while creating and loading cfg file
        new.errStr="error while creating and loading cfg file";
    }
    

    while(_current!=EXIT){
        getmaxyx(stdscr, _currentRes.y, _currentRes.x);
        
        switch(_current){
           case ERROR:
           errorHandler(new);
            _current=EXIT;
            break;
            default:
            break;
        }
    
        if(keyPressed=='q'){
            _current=EXIT;
        }
        keyPressed = wgetch(stdscr);
        napms(100);
        keyPressed = wgetch(stdscr);

        // Clear
        erase();
    
    }



    endwin();
    return 0;
}