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

public:
	Person ();
	~Person ();

	void init ();
	void render ();
	void print ();

};

#endif