#include "stateModule.h"
#include <stdio.h>
#include <ncurses.h>
int main(void){

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
    STATE _current=LOGO;
    

    while(_current!=EXIT){
        getmaxyx(stdscr, _currentRes.y, _currentRes.x);
        
        switch(_current){
           case LOGO:
            mvprintw(_currentRes.y-1,1,"%c",'A');
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