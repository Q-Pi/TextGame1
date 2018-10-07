#ifndef MENUSCREEN_H
#define MENUSCREEN_H

using namespace std;

#include <string>

class MenuScreen{

private:
	string desc;
	string options[100];
	/* pointeur_sur_fonction (void * ?) * actions */
	int nbOptions;
	int cursor;

	void cursorUp();
	void cursorDown();

public:
	MenuScreen ();
	void setDesc ( const string );
	void addDescLine ( const string );
	void addOption ( string /* , pointeur_sur_fonction (void * ?) */);
	void run();
	void printDesc();
	void printOptions();
};

#endif