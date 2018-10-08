using namespace std;

#include "Person.h"
#include <iostream>

Person::Person (): hp(BASE_HP), hpMax(BASE_HP), mp(BASE_MP), mpMax(BASE_MP), ap(BASE_AP), apMax(BASE_AP), level(1)
{}

Person::~Person ()
{}

void Person::init ()
{
	cout << "Choose a name : ";
	cin >> name;
	cout << endl;
}

void Person::render ()
{
	info = "";
	info += name + "(" + to_string(level) + ")" + "\n";
	info += "HP " + to_string(hp) + "/" + to_string(hpMax) + "\n";
	info += "MP " + to_string(mp) + "/" + to_string(mpMax) + "\n";
	info += "AP " + to_string(ap) + "/" + to_string(apMax) + "\n";
}

void Person::print ()
{
	cout << info << endl;
}