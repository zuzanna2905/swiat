#pragma once
#include "Zwierze.h"
#include <random>

void Zwierze::akcja(Organizm* organizm[20][20]){
	Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
	int x1 = (x - 7) / 3;
	int y1 = y - 6;
	int a = rand() % 4;
	gotoxy(x, y);
	if (a == 0 && x < 64){
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
	if (organizm[x1][y1] != NULL) {
		if (kolizja(organizm, x1, y1))
		{
			organizm[x1][y1] = tmp;
		}
	}
	else {
		organizm[x1][y1] = tmp;
	}
	//organizm[x1][y1] = tmp;
	organizm[x1][y1]->set_tura(true);
	tmp = NULL;
	delete tmp;
}

bool Zwierze::kolizja(Organizm* organizm[20][20], int x, int y){
		//if (id == organizm[x][y]->get_id())
		//{
		//	cputs("-");
		//}
		//else {
		//	if (this->si³a > organizm[x][y]->get_si³a()){

		//	}
		//}
		return true;
}