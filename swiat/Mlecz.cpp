#include "Mlecz.h"
#include <iostream>

Mlecz::Mlecz(int m)
{
	si³a = 0;
	inicjatywa = 0;
	wiek = 0;
	id = m;
}


Mlecz::~Mlecz(){}


void Mlecz::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("M");
	gotoxy(x, y);
}

// Mlecz próbuje rozsiaæ siê 3 razy
bool Mlecz::akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy){
	for (int i = 0; i < 3; i++){
		Roslina::akcja(organizm, inicjatywy);
	}
	return false;
}