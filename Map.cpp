using namespace std;

#include "Map.h"
#include <iostream>
#include <fstream>

Map::Map ( Person p ): w(0), h(0), x(0), y(0), strGrid(""), player(p)
{}

Map::~Map ()
{
	for( int y = 0; y < h; y++)
		delete[] grid[y];	
	delete[] grid;
}

void Map::load ( string path )
{
	string line;
	ifstream mapFile ( path );

	if(!mapFile.is_open())
	{
		cout << "Unabale to open: " << path << endl;
		exit(1);
	}

	mapFile >> w;
	mapFile >> h;
	int link;
	mapFile >> link;

	grid = new Tile*[h];
	for( int y = 0; y < h; y++ )
	{
		grid[y] = new Tile[w];
	}

	for( int y = 0; y < h; y++ )
	{
		mapFile >> line;
		for( int x = 0; x < w; x++)
		{
			switch(line[x])
			{
				case '0': grid[y][x] = GroundTile();
				break;
				case '1': grid[y][x] = WallTile();
				break;
				case 'd': grid[y][x] = DoorTile();
				break;
				case 'p': grid[y][x] = GroundTile();
			}
		}
	}

	mapFile.close();
	cout << "Load correcly." << endl;
}

void Map::render ()
{
	strGrid = "";
	for( int y = 0; y < h; y++)
	{
		for( int x = 0; x < w; x++)
			strGrid += grid[y][x].getChr();
		strGrid += '\n';
	}
}

void Map::print ()
{
	cout << strGrid;
}