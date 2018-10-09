#ifndef TILE_H
#define TILE_H

using namespace std;

class Tile
{
private:
	//Sprite sprite;
	//Sprite element;
	char sprite;

public:
	Tile ();
	~Tile ();
	char getChr ()
	{
		return sprite;
	}
};

#endif