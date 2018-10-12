using namespace std;

#include "Person.h"
#include <iostream>

Person::Person (): hp(BASE_HP), hpMax(BASE_HP), mp(BASE_MP), mpMax(BASE_MP), ap(BASE_AP), apMax(BASE_AP), level(1), sprite('X')
{}

Person::~Person ()
{}

void Person::init ()
{
	cout << "Choose a name : ";
	cin >> name;
	cout << endl;
}

void Person::spawn ( int _x, int _y )
{
	x = _x;
	y = _y;
}

void Person::render ()
{
	info = "";
	info += name + "(" + to_string(level) + ")" + "\n";
	info += "HP " + to_string(hp) + "/" + to_string(hpMax) + "\n";
	info += "MP " + to_string(mp) + "/" + to_string(mpMax) + "\n";
	info += "AP " + to_string(ap) + "/" + to_string(apMax) + "\n";
	info += "X=" + to_string(x) + "/Y=" + to_string(y) + "\n";
}

void Person::print ()
{
	cout << info << endl;
}

void Person::translateTo ( int dx , int dy )
{
	if(mp)
	{	
		x = dx;
		y = dy;
		mp--;
	}
}

void Person::newTurn ()
{
	mp = mpMax;
	ap = apMax;
}