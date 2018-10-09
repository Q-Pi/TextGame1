main = main
editor = subl

all: clean build run

clean:
	@-rm $(main)
	@-rm *.o

build: main.o Game.o Person.o Map.o
	@g++ $(main).o Game.o Person.o Map.o -o $(main)

main.o:
	@g++ $(main).cpp -c

Game.o:
	@g++ Game.cpp -c

Person.o:
	@g++ Person.cpp -c

Map.o:
	@g++ Map.cpp -c

run:
	@./$(main)

edit:
	$(editor) Makefile
	$(editor) *.cpp
	$(editor) *.h