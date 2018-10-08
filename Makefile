main = main
editor = subl

all: clean build run

clean:
	@-rm $(main)
	@-rm *.o

build: main.o MenuScreen.o Person.o
	@g++ $(main).o MenuScreen.o Person.o -o $(main)

main.o:
	@g++ $(main).cpp -c

MenuScreen.o:
	@g++ MenuScreen.cpp -c

Person.o:
	@g++ Person.cpp -c

run:
	@./$(main)

edit:
	$(editor) Makefile
	$(editor) *.cpp
	$(editor) *.h