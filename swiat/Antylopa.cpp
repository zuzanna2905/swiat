#include "Antylopa.h"
#include <random>

Antylopa::Antylopa(int m)
{
	si³a = 4;
	inicjatywa = 4;
	wiek = 0;
	id = m;
}

Antylopa::~Antylopa(){}

bool Antylopa::akcja(Organizm * organizm[20][20], std::list<Organizm*>& inicjatywy) {
	bool usun = false;
	Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
	int x1 = (x -7)/3; 
	int y1 = y - 6;
	int x_old = x;
	int y_old = y;
	int x1_old = x1;
	int y1_old = y1;
	int a = rand() % 4;
	gotoxy(x, y);
	if (a == 0 && x < 60){
		cputs(" ");
		x1 += 2;
		x += 6;
	}
	else if (a == 1 && x > 11){
		cputs(" ");
		x1 -= 2;
		x -= 6;
	}
	else if (a == 2 && y < 20){
		cputs(" ");
		y1 += 2;
		y += 2;
	}
	else if (a == 3 && y > 11){
		cputs(" ");
		y1 -= 2;
		y -= 2;
	}
	else {
		akcja(organizm, inicjatywy);
		return false;
	}
	bool flaga = false;
	if (organizm[x1][y1] != NULL) {
		if (kolizja(organizm, x1, y1, flaga, inicjatywy))
		{
			// ginie atakowany
			inicjatywy.remove(organizm[x1][y1]);
			organizm[x1_old][y1_old] = NULL;
			organizm[x1][y1] = tmp;
			organizm[x1][y1]->set_tura(true);
		}
		else{
			if (flaga) {
				// rozmnazanie
				organizm[x1_old][y1_old] = tmp;
				organizm[x1_old][y1_old]->set_tura(true);
				x = x_old;
				y = y_old;
			}
			else {
				// losowanie czy ucieka
				int b = rand() % 2;
				if (b == 0){
					// ginie atakujacy
					organizm[x1_old][y1_old] = NULL; // ginie
					//inicjatywy.remove(tmp);
					usun = true;
				}
				else{
					//ucieka
					//return akcja(organizm, inicjatywy, 1);
					organizm[x1_old][y1_old] = tmp;
					organizm[x1_old][y1_old]->set_tura(true);
					x = x_old;
					y = y_old;
				}
			}
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

void Antylopa::rysowanie(){
	int x1 = wherex();
	int y1 = wherey();
	gotoxy(this->x, this->y);
	cputs("A");
	gotoxy(x1, y1);
}