main = main
editor = subl

all: clean build run

clean:
	@-rm $(main)
	@-rm *.o

build: main.o Game.o Person.o Map.o Tile.o GroundTile.o WallTile.o DoorTile.o
	@g++ $(main).o Game.o Person.o Map.o Tile.o GroundTile.o WallTile.o DoorTile.o -o $(main) `sdl2-config --cflags --libs`
	
main.o:
	@g++ $(main).cpp -c

Game.o:
	@g++ Game.cpp -c

Person.o:
	@g++ Person.cpp -c

Map.o:
	@g++ Map.cpp -c

Tile.o:
	@g++ Tile.cpp -c

WallTile.o:
	@g++ WallTile.cpp -c

GroundTile.o:
	@g++ GroundTile.cpp -c

DoorTile.o:
	@g++ DoorTile.cpp -c

run:
	@./$(main)

edit:
	$(editor) Makefile
	$(editor) *.cpp
	$(editor) *.h