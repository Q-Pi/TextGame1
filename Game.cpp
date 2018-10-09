using namespace std;

#include "Game.h"
#include <iostream>

Game::Game (): running(true), map(player)
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

void Game::handleInput ()
{}

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
