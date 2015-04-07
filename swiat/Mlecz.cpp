#include "Mlecz.h"
#include <iostream>
using namespace std;

Mlecz::Mlecz()
{
	si³a = 0;
	inicjatywa = 0;
}


Mlecz::~Mlecz()
{
}

void Mlecz::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("M");
	gotoxy(x, y);
}

void Mlecz::akcja(){}

void Mlecz::kolizja(){}