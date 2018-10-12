using namespace std;

#include "Tile.h"

Tile::Tile ()
{}

Tile::Tile ( char sp, bool wlk ): sprite ( sp ), walkable( wlk )
{}

Tile::~Tile ()
{}

char Tile::getSprite ()
{
	return sprite;
}