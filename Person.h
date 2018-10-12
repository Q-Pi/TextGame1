#ifndef PERSON_H
#define PERSON_H

using namespace std;

#include <string>

#define BASE_HP 40
#define BASE_MP 5
#define BASE_AP 5

class Person
{

private:
	string name;
	int hp;
	int hpMax;
	int mp;
	int mpMax;
	int ap;
	int apMax;
	int level;
	string info;
	int x;
	int y;
	char sprite;

public:
	Person ();
	~Person ();

	void init ();
	void spawn ( int, int );
	void render ();
	void print ();
	void translateTo ( int, int );
	void newTurn ();

	int getMp () {return mp;}
	int getX () {return x;}
	int getY () {return y;}
	char getSprite () {return sprite;}

};

#endif