using namespace std;

#include <iostream>
#include <cstdlib>
#include "MenuScreen.h"

int main ( int argc, char** argv ){

	system("clear");
	cout << "New Game" << endl << endl;

	MenuScreen test = MenuScreen();
	test.setDesc("Choisir :");
	test.addOption("Jouer");
	test.addOption("Options");
	test.addOption("Crédits");
	test.addOption("Quitter");
	test.printDesc();
	test.printOptions();

	cout << "Quit Game" << endl;

	return EXIT_SUCCESS;
}
