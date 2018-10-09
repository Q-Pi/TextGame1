#ifndef MAP_H
#define MAP_H

using namespace std;

#include <cstring>

class Map
{
private:
	int w, h;
	int x, y;
	Tile** grid;
	string strGrid;
	Person& player;
	//Elements
		//Containers
		//Objects
		//Monsters
		//PNJ

public:
	Map ();
	~Map ();

	void load ( string );
	void render ();
	void print ();
};

#endif