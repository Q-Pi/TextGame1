using namespace std;

#include "Game.h"
#include <iostream>

Game::Game (): running(true), player()
{
	system("clear");
	cout << "New Game" << endl << endl;
}

Game::~Game ()
{}

void Game::init ()
{
	player.init();
}

void Game::handleInput ()
{}

void Game::update ()
{}

void Game::render ()
{
	player.render();
}

void Game::print()
{
	system("clear");
	player.print();
}

void Game::clean ()
{
	cout << "Quit Game" << endl;
}
