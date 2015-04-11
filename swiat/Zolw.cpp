#include "Zolw.h"
#include <iostream>
using namespace std;

Zolw::Zolw(){
	si³a = 2;
	inicjatywa = 1;
}


void Zolw::akcja(Organizm *organizm[20][20]) {
	int b = rand() % 4;
	if (b > 2){
		Organizm *tmp = organizm[(x - 7) / 3][y]; // 7 to X
		int x1 = x;
		int a = rand() % 4;
		gotoxy(x, y);
		cputs(" ");
		if (a == 0 && x < 65){
			organizm[(x - 7) / 3][y] = NULL;
			x1 = (x - 7) / 3 + 1;
			x += 3;
		}
		else if (a == 1 && x > 7){
			organizm[(x - 7) / 3][y] = NULL;
			x1 = (x - 7) / 3 - 1;
			x -= 3;
		}
		else if (a == 2 && y < 25){
			organizm[(x - 7) / 3][y] = NULL;
			y += 1;
		}
		else if (a == 3 && y > 6){
			organizm[(x - 7) / 3][y] = NULL;
			y -= 1;
		}
		else {
			akcja(organizm);
		}
		organizm[(x1 - 7) / 3][y] = tmp;
		tmp = NULL;
	}
}

void Zolw::kolizja(){}

void Zolw::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("Z");
	gotoxy(x, y);
}