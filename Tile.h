#ifndef TILE_H
#define TILE_H

using namespace std;

class Tile
{
protected:
	//Sprite sprite;
	//Sprite element;
	char sprite;

public:
	Tile ();
	Tile ( char );
	~Tile ();
	char getChr ()
	{
		return sprite;
	}
};

#endif