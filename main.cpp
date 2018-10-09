using namespace std;

#include <iostream>
#include <cstdlib>
//#include "SDL2/SDL.h"
#include "Game.h"

int main ( int argc, char** argv )
{
	//SDL_Init( SDL_INIT_VIDEO );

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

	//SDL_Quit();

	return EXIT_SUCCESS;
}
