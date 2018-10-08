using namespace std;

#include <iostream>
#include <cstdlib>
#include "MenuScreen.h"
#include "Person.h"

int main ( int argc, char** argv )
{

	system("clear");
	cout << "New Game" << endl << endl;

	Person player;
	player.init();
	player.render();
	player.print();

	cout << "Quit Game" << endl;

	return EXIT_SUCCESS;
}
