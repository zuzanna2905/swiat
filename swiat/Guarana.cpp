#include "Guarana.h"
#include <iostream>
using namespace std;

Guarana::Guarana()
{
	si³a = 0;
	inicjatywa = 0;
}


Guarana::~Guarana()
{
}

void Guarana::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("G");
	gotoxy(x, y);
}

void Guarana::akcja(){}

void Guarana::kolizja(){}