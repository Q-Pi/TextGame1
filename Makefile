main = main

all: clean build run

clean:
	@-rm $(main)
	@-rm *.o

build: main.o MenuScreen.o
	@g++ $(main).o MenuScreen.o -o $(main)

main.o:
	@g++ $(main).cpp -c

MenuScreen.o:
	@g++ MenuScreen.cpp -c

run:
	@$(main)