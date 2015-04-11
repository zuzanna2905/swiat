#include "Zolw.h"
#include <iostream>

Zolw::Zolw(int m){
	si³a = 2;
	inicjatywa = 1;
	wiek = 0;
	id = m;
}


void Zolw::akcja(Organizm *organizm[20][20]) {
	int b = rand() % 4;
	if (b > 2){
		Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
		int x1 = (x - 7) / 3;
		int y1 = y - 6;
		int a = rand() % 4;
		gotoxy(x, y);
		if (a == 0 && x < 65){
			organizm[x1][y1] = NULL;
			cputs(" ");
			x1 += 1;
			x += 3;
		}
		else if (a == 1 && x > 7){
			organizm[x1][y1] = NULL;
			cputs(" ");
			x1 -= 1;
			x -= 3;
		}
		else if (a == 2 && y < 25){
			organizm[x1][y1] = NULL;
			cputs(" ");
			y1 += 1;
			y += 1;
		}
		else if (a == 3 && y > 6){
			organizm[x1][y1] = NULL;
			cputs(" ");
			y1 -= 1;
			y -= 1;
		}
		else {
			akcja(organizm);
			return;
		}
		organizm[x1][y1] = tmp;
		organizm[x1][y1]->set_tura(true);
		tmp = NULL;
		delete tmp;
	}
}

bool Zolw::kolizja(Organizm *organizm[20][20], int x, int y){ return true; }

void Zolw::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("Z");
	gotoxy(x, y);
}