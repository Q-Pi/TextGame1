#ifndef GAME_H
#define GAME_H

using namespace std;

#include "Person.h"
#include "Map.h"

class Game
{
private:
	bool running;
	bool playerTurn;
	Person player;
	Map map;
	Person* units;
	int nbUnits;

	bool noCollision (const int&, const int& );
	bool correctMove ( int, int );

public:
	Game ();
	~Game ();

	void init ();
	void handleInput ();
	void update ();
	void render ();
	void print ();
	void clean ();
	void newTurn ();

	bool isRunning (){return running;}
	bool isPlayerTurn(){return playerTurn;}

	void moveUp( Person& );
	void moveLeft( Person& );
	void moveDown( Person& );
	void moveRight( Person& );

};

#endif
