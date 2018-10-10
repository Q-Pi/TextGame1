#ifndef MAP_H
#define MAP_H

using namespace std;

#include <cstring>
#include "Tile.h"
#include "GroundTile.h"
#include "WallTile.h"
#include "DoorTile.h"
#include "Person.h"

class Map
{
private:
	int w, h;
	int x, y;
	Tile** grid;
	string strGrid;
	Person& player;
	//Connections
	//Elements
		//Containers
		//Objects
		//Monsters
		//PNJ

public:
	Map ( Person );
	~Map ();

	void load ( string );
	void render ();
	void print ();
};

#endif