#include "Lis.h"
#include <iostream>
using namespace std;

Lis::Lis(){
	si³a = 3;
	inicjatywa = 7;
}


void Lis::akcja(){}

void Lis::kolizja(){}

void Lis::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("L");
	gotoxy(x, y);
}