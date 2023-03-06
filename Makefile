DIR=./build/
FLAGS=-Werror -Wall -Wextra -lncurses
all: main 

main:  STATE START_ FINDME
	gcc -o $(DIR)FINDME FINDME.o start_.o state.o $(FLAGS)
FINDME: FINDME.c stateModule.h
	gcc -c FINDME.c $(FLAGS)

START_: start_.c fileHandler.h
	gcc -c start_.c $(FLAGS)

STATE: state.c stateModule.h
	gcc -c state.c $(FLAGS)
clean:
	rm -rf *.o $(DIR)*
rebuild: clean all