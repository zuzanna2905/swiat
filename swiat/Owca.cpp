#include "Owca.h"
#include <iostream>
using namespace std;

Owca::Owca(){
	si³a = 4;
	inicjatywa = 4;
}

void Owca::akcja(Organizm *organizm[20][20]) {}

void Owca::kolizja(){}

void Owca::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("O");
	gotoxy(x, y);
}