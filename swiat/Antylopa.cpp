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

void Antylopa::akcja(Organizm * organizm[20][20]) {
	Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
	int x1 = (x -7)/3; 
	int y1 = y - 6;
	int a = rand() % 4;
	gotoxy(x, y);
	if (a == 0 && x < 60){
		organizm[x1][y1] = NULL;
		cputs(" ");
		x1 += 2;
		x += 6;
	}
	else if (a == 1 && x > 10){
		organizm[x1][y1] = NULL;
		cputs(" ");
		x1 -= 2;
		x -= 6;
	}
	else if (a == 2 && y < 24){
		organizm[x1][y1] = NULL;
		cputs(" ");
		y1 += 2;
		y += 2;
	}
	else if (a == 3 && y > 6){
		organizm[x1][y1] = NULL;
		cputs(" ");
		y1 -= 2;
		y -= 2;
	}
	else {
		akcja(organizm);
		return;
	}
	if (organizm[x1][y1] != NULL) {
		kolizja(organizm, x1, y1);
	}
	organizm[x1][y1] = tmp;
	organizm[x1][y1]->set_tura(true);
	tmp = NULL;
	delete tmp;
}

bool Antylopa::kolizja(Organizm *organizm[20][20], int x, int y){
	return true;
}

void Antylopa::rysowanie(){
	int x1 = wherex();
	int y1 = wherey();
	gotoxy(this->x, this->y);
	cputs("A");
	gotoxy(x1, y1);
}