#include "Wilk.h"
#include <iostream>
using namespace std;

Wilk::Wilk(int m){
	si³a = 9;
	inicjatywa = 5;
	wiek = 0;
	id = m;
}

void Wilk::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("W");
	gotoxy(x, y);
}