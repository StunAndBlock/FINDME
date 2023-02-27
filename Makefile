DIR=./build/
FLAGS=-Werror -Wall -Wextra -lncurses
all: main 

main: FINDME
	gcc -o $(DIR)FINDME FINDME.o $(FLAGS)
FINDME: FINDME.c stateModule.h
	gcc -c FINDME.c $(FLAGS)
clean:
	rm -rf *.o $(DIR)*
rebuild: clean all