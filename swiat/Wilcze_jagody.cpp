#include "Wilcze_jagody.h"


Wilcze_jagody::Wilcze_jagody(int m)
{
	si³a = 99;
	inicjatywa = 0;
	wiek = 0;
	id = m;
}


Wilcze_jagody::~Wilcze_jagody()
{
}


void Wilcze_jagody::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("J");
	gotoxy(x, y);
}
