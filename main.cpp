using namespace std;

#include <iostream>
#include <cstdlib>
#include "Game.h"
#include "Room.h"

int main ( int argc, char** argv )
{
	int i = 0;

	Game game;
	game.init();

	while(game.isRunning() && i<1000)
	{
		game.handleInput();
		game.update();
		game.render();
		game.print();
		i++;
	}

	game.clean();

	return EXIT_SUCCESS;
}
