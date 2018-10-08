using namespace std;

#include "MenuScreen.h"
#include <cstdlib>
#include <iostream>


/* Private Methods : */

void MenuScreen::printDesc ()
{

	cout << desc << endl;

}

void MenuScreen::printOptions ()
{

	for( int i = 0 ; i < nbOptions ; i++ ){
		if( i == cursor )
			cout << " >";
		else
			cout << "> ";
		cout << options[i] << endl;
	}
	cout << endl;

}

void MenuScreen::cursorUp ()
{

	if( cursor )
		cursor--;
	else
		cursor = nbOptions-1;

}

void MenuScreen::cursorDown ()
{

	if( cursor < nbOptions-1 )
		cursor++;
	else
		cursor = 0;

}


/* Public Methods : */

MenuScreen::MenuScreen (): nbOptions(0), cursor(0)
{}

void MenuScreen::setDesc ( const string txt ){

	desc = txt + "\n";

}

void MenuScreen::addDescLine ( const string txt )
{

	desc += txt + "\n";

}

void MenuScreen::addOption ( string txt /* , pointeur_sur_fonction (void * ?) action */)
{
	
	options[nbOptions] = txt;
	/*actions[nbOptions] = action;*/
	nbOptions++;

}

void MenuScreen::run()
{
	/*while(!enter){
		printDesc();
		printOptions();
		if(down) cursor;
		if(up) cursor++;
	}
	acions[cursor]();
	*/
}