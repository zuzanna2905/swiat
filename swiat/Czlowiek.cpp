#include <iostream>
#include "Conio2.h"
#include "Czlowiek.h"
using namespace std;

Czlowiek::Czlowiek(){
	si³a = 5;
	inicjatywa = 4;
	wiek = 0;
}

Czlowiek::~Czlowiek(){}

void Czlowiek::akcja(Organizm * organizm[20][20]){
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

void Czlowiek::kolizja(){}

void Czlowiek::rysowanie(){
	int x = wherex();
	int y = wherey();
			gotoxy(this->x, this->y);
	cputs("C");
	gotoxy(x, y);
}