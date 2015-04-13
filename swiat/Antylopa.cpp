#include "Antylopa.h"
#include <random>
#define X 7
#define Y 6
#define GRANICA_1 60
#define GRANICA_2 11
#define GRANICA_3 20

Antylopa::Antylopa(int m)
{
	si³a = 4;
	inicjatywa = 4;
	wiek = 0;
	id = m;
}

Antylopa::~Antylopa(){}

// specjalna akcja rusza siê co dwa pola
bool Antylopa::akcja(Organizm * organizm[20][20], std::list<Organizm*>& inicjatywy) {
	bool usun = false;
	Organizm *tmp = organizm[(x - X) / 3][y - Y];
	int x1 = (x - X)/3; 
	int y1 = y - Y;
	int x_old = x;
	int y_old = y;
	int x1_old = x1;
	int y1_old = y1;
	int a = rand() % 4;
	gotoxy(x, y);
	if (a == 0 && x < GRANICA_1){
		cputs(" ");
		x1 += 2;
		x += 6;
	}
	else if (a == 1 && x > GRANICA_2){
		cputs(" ");
		x1 -= 2;
		x -= 6;
	}
	else if (a == 2 && y < GRANICA_3){
		cputs(" ");
		y1 += 2;
		y += 2;
	}
	else if (a == 3 && y > GRANICA_2){
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
			if (organizm[x1][y1]->get_id() == 8){
				zwieksz_si³e();
			}
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
					usun = true;
				}
				else{
					//ucieka
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