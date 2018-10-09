main = main
editor = subl

all: clean build run

clean:
	@-rm $(main)
	@-rm *.o

build: main.o Game.o Person.o
	@g++ $(main).o Game.o Person.o -o $(main) -lSDL2

main.o:
	@g++ $(main).cpp -c

Game.o:
	@g++ Game.cpp -c

Person.o:
	@g++ Person.cpp -c

run:
	@./$(main)

edit:
	$(editor) Makefile
	$(editor) *.cpp
	$(editor) *.h