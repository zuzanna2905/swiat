#include "Trawa.h"
#include <iostream>
using namespace std;


Trawa::Trawa()
{
	si³a = 0;
	inicjatywa = 0;
}


Trawa::~Trawa()
{
}

void Trawa::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("T");
	gotoxy(x, y);
}

void Trawa::akcja(){}

void Trawa::kolizja(){}