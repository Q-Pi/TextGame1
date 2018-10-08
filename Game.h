#ifndef GAME_H
#define GAME_H

using namespace std;

#include "Person.h"

class Game
{
private:
	bool running;
	Person player;

public:
	Game ();
	~Game ();

	void init ();
	void handleInput ();
	void update ();
	void render ();
	void print ();
	void clean ();

	bool isRunning (){return running;}

};

#endif
