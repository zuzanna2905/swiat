#include "Wilcze_jagody.h"
#include <iostream>


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

void Wilcze_jagody::akcja(Organizm *organizm[20][20]) {
	Organizm *tmp = organizm[x][y];
	int x1 = x;
	organizm[x][y] = NULL;
	int a = rand() % 4;
	if (a == 0){ x1 = x + 1; x += 3; }
	else if (a == 1){ x1 = x - 1; x -= 3; }
	else if (a == 2){ y += 1; }
	else{ y -= 1; }
	organizm[x1][y] = tmp;
	tmp = NULL;

}

void Wilcze_jagody::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("J");
	gotoxy(x, y);
}

bool Wilcze_jagody::kolizja(Organizm *organizm[20][20], int x, int y){ return true; }