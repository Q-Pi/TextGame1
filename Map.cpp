using namespace std;

#include "Map.h"

Map::Map ( Person p ): w(0), h(0), x(0), y(0), strGrid(""), player(p)
{}

Map::~Map ()
{
	for( int y = 0; y < h; y++)
		delete[] grid[y]	
	delete[] grid;
}

void Map::load ( string path )
{
	//open file
	//read WIDTH = w
	//read HEIGHT = h
	//read CONNECTION = link

	grid = new Tile*[h];
	for( int y = 0; y < h; y++)
	{
		grid[y] = new Tile[w];
	}

	char* line = new char[w];

	for( int y = 0; y < h; y++)
	{
		//readLine to line
		for( int x = 0; x < w; x++)
		{
			switch(line[x])
			{
				case '0': grid[y][x] = GroundTile;
				break;
				case '1': grid[y][x] = WallTile;
				break;
				case 'd': grid[y][x] = DoorTile;
			}
		}
	}

	delete[] line;

}

void Map::render ()
{
	strGrid = "";
	for( int y = 0; y < h; y++)
	{
		for( int x = 0; x < w; x++)
			strGrid += grid[y][x];
		strGrid += '\n';
	}
}

void Map::print ()
{
	cout << strGrid;
}