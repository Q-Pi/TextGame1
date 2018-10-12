#ifndef TILE_H
#define TILE_H

using namespace std;

#include "Person.h"

class Tile
{
protected:
	char sprite;
	bool walkable;

public:
	Tile ();
	Tile ( char, bool );
	~Tile ();
	char getSprite ();
	bool isWalkable () {return walkable;}
};

#endif