#include "Trawa.h"
#include <iostream>


Trawa::Trawa(int m)
{
	si³a = 0;
	inicjatywa = 0;
	wiek = 0;
	id = m;
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


