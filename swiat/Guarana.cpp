#include "Guarana.h"
#include <random>

Guarana::Guarana(int m)
{
	si�a = 0;
	inicjatywa = 0;
	wiek = 0;
	id = m;
}

Guarana::~Guarana(){}

// guarana dodaje si�y kolizja zwierze

void Guarana::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("G");
	gotoxy(x, y);
}
