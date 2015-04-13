#include "Czlowiek.h"
#include <random>

Czlowiek::Czlowiek(){
	si³a = 500000;
	inicjatywa = 4;
	wiek = 0;
	id = 10;
	mov_x = 0;
	mov_y = 0;
	tura = false;
	moc = false;
}

Czlowiek::~Czlowiek(){}

bool Czlowiek::akcja(Organizm* organizm[20][20], std::list<Organizm*>& inicjatywy){
	bool usun = false;
	Organizm *tmp = organizm[(x - 7) / 3][y - 6];
	int x1 = (x - 7) / 3;
	int y1 = y - 6;
	int x_old = x;
	int y_old = y;
	int x1_old = x1;
	int y1_old = y1;
	gotoxy(x, y);
	if (mov_x >= 7 && mov_x <= 64 && mov_y <= 25 && mov_y >= 6){
		cputs(" ");
		x = mov_x;
		y = mov_y;
		x1 = (x - 7) / 3;
		y1 = y - 6;
	}
	else {
		organizm[x1][y1]->set_tura(true);
		return false;
	}
	bool flaga = false; // ginie/mnozenie
	if (organizm[x1][y1] != NULL) {
		if (kolizja(organizm, x1, y1, flaga, inicjatywy))
		{
			// ginie atakowany
			if (organizm[x1][y1]->get_id() == 8){
				zwieksz_si³e();
			}
			inicjatywy.remove(organizm[x1][y1]);
			organizm[x1_old][y1_old] = NULL;
			organizm[x1][y1] = tmp;
			organizm[x1][y1]->set_tura(true);
		}
		else{
			// ginie atakujacy
			organizm[x1_old][y1_old] = NULL; // ginie
			usun = true;
		}
	}
	else {
		organizm[x1_old][y1_old] = NULL;
		organizm[x1][y1] = tmp;
		organizm[x1][y1]->set_tura(true);
	}
	tmp = NULL;
	delete tmp;
	return usun;
}

void Czlowiek::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("C");
	gotoxy(x, y);
}

void Czlowiek::przesun(int x, int y) {
	mov_x = x;
	mov_y = y;
}

void Czlowiek::super_moc(bool moc) {
	if (moc) {
		this->moc = !this->moc;
	}
}