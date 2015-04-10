#include "Wilk.h"
#include <iostream>
using namespace std;

Wilk::Wilk(){
	si³a = 9;
	inicjatywa = 5;
}


void Wilk::akcja(Organizm *organizm[20][20]) {}

void Wilk::kolizja(){}

void Wilk::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("W");
	gotoxy(x, y);
}