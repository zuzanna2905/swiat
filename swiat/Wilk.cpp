#include "Wilk.h"
#include <iostream>
using namespace std;

Wilk::Wilk(){
	si³a = 9;
	inicjatywa = 5;
}


void Wilk::akcja(Organizm *organizm[20][20]) {
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

void Wilk::kolizja(){}

void Wilk::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("W");
	gotoxy(x, y);
}