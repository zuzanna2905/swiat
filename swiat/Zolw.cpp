#include "Zolw.h"
#include <iostream>
using namespace std;

Zolw::Zolw(){
	si³a = 2;
	inicjatywa = 1;
}


void Zolw::akcja(){}

void Zolw::kolizja(){}

void Zolw::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("Z");
	gotoxy(x, y);
}