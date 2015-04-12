#include "Zolw.h"
#include <iostream>

Zolw::Zolw(int m){
	si³a = 2;
	inicjatywa = 1;
	wiek = 0;
	id = m;
}


bool Zolw::akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy) {
	int b = rand() % 4;
	if (b > 2){
		return Zwierze::akcja(organizm, inicjatywy);
	}
	organizm[(x - 7) / 3][y - 6]->set_tura(true);
	return false;
}

void Zolw::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("Z");
	gotoxy(x, y);
}