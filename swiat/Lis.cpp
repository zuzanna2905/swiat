#include "Lis.h"
#include <random>

Lis::Lis(int m){
	si³a = 3;
	inicjatywa = 7;
	wiek = 0;
	id = m;
}

//lis nie wchodzi na silniejszy kolizja zwierze 

void Lis::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("L");
	gotoxy(x, y);
}