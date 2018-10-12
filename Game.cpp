using namespace std;

#include "Game.h"
#include <iostream>

Game::Game (): running(true), map(player), nbUnits(0)
{
	system("clear");
	cout << "New Game" << endl << endl;
}

Game::~Game ()
{}

void Game::init ()
{
	player.init();
	map.load("map1");
}

void Game::newTurn ()
{
	playerTurn = true;
	player.newTurn();
}

void Game::handleInput ()
{
	string input;
	cin >> input;
	switch(input[0])
	{
		case 'z':	moveUp( player );
		break;
		case 'q':	moveLeft( player );
		break;
		case 's': 	moveDown( player );
		break;
		case 'd':	moveRight( player );
		break;
		case 'p':	running = false;
	}
	if(player.getMp() == 0)
		playerTurn = false;
}

void Game::update ()
{}

void Game::render ()
{
	player.render();
	map.render();
}

void Game::print()
{
	system("clear");
	map.print();
	player.print();
}

void Game::clean ()
{
	cout << "Quit Game" << endl;
}

bool Game::noCollision (const int& x,const int& y )
{
	for ( int i = 0; i < nbUnits; i++ )
	{
		if ( units[i].getX() == x && units[i].getY() == y )
			return false;
	}
	return ( player.getX() != x || player.getY() != y );
}

bool Game::correctMove ( int x, int y )
{
	return map.get(x, y)->isWalkable();
}

void Game::moveUp ( Person& u )
{
	int x = u.getX();
	int y = u.getY()-1;
	if(noCollision( x, y ) && correctMove( x, y))
		u.translateTo( x, y );

}

void Game::moveLeft ( Person& u )
{
	int x = u.getX()-1;
	int y =  u.getY();
	if(noCollision( x, y ) && correctMove( x, y ))
		u.translateTo( x, y );

}

void Game::moveDown ( Person& u )
{
	int x = u.getX();
	int y = u.getY()+1;
	if(noCollision( x, y ) && correctMove( x, y ))
		u.translateTo( x, y );

}

void Game::moveRight ( Person& u )
{
	int x = u.getX()+1;
	int y =  u.getY();
	if(noCollision( x, y ) && correctMove( x, y ))
		u.translateTo( x, y );

}
