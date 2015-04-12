#pragma once
#include "Zwierze.h"
#include "Antylopa.h"
#include "Guarana.h"
#include "Lis.h"
#include "Mlecz.h"
#include "Owca.h"
#include "Trawa.h"
#include "Wilcze_jagody.h"
#include "Wilk.h"
#include "Zolw.h"
#include <random>
#define X 7
#define Y 6

void Zwierze::akcja(Organizm* organizm[20][20]){
	Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
	int x1 = (x - 7) / 3;
	int y1 = y - 6;
	int x_old = x;
	int y_old = y;
	int x1_old = x1;
	int y1_old = y1;
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
	bool flaga = false; // ginie/mnozenie
	if (organizm[x1][y1] != NULL) {
		if (kolizja(organizm, x1, y1, flaga))
		{
			organizm[x1][y1] = tmp;
			organizm[x1][y1]->set_tura(true);
		}
		else{
			if (flaga) {
				organizm[x1_old][y1_old] = tmp;
				organizm[x1_old][y1_old]->set_tura(true);
				x = x_old;
				y = y_old;
			}
			else {
				//organizm[x1_old][y1_old] = NULL; // ginie
			}
		}
	}
	else {
		organizm[x1][y1] = tmp;
		organizm[x1][y1]->set_tura(true);
	}
	tmp = NULL;
	delete tmp;
}

bool Zwierze::kolizja(Organizm* organizm[20][20], int x, int y, bool& flaga){
	if (id == organizm[x][y]->get_id())
	{
		bool nowy = false;
		while (!nowy){
			int z = rand() % 8;
			if (z == 0 && x < 19 && organizm[x + 1][y] == NULL){
				stworz(organizm, id, x+1, y);
				nowy = true;
			}
			else if (z == 1 && x > 0 && organizm[x - 1][y] == NULL){
				stworz(organizm, id, x-1, y);
				nowy = true;
			}
			else if (z == 2 && x < 19 && y <19 && organizm[x + 1][y + 1] == NULL){
				stworz(organizm, id, x+1, y+1);
				nowy = true;
			}
			else if (z == 3 && x < 19 && y >0 && organizm[x + 1][y - 1] == NULL){
				stworz(organizm, id, x+1, y-1);
				nowy = true;
			}
			else if (z == 4 && x> 0 && y <19 && organizm[x - 1][y + 1] == NULL){
				stworz(organizm, id, x-1, y+1);
				nowy = true;
			}
			else if (z == 5 && x> 0 && y >0 && organizm[x - 1][y - 1] == NULL){
				stworz(organizm, id, x-1, y-1);
				nowy = true;
			}
			else if (z == 6 && y >0	&&	organizm[x][y - 1] == NULL){
				stworz(organizm, id, x, y-1);
				nowy = true;
			}
			else if (z == 7 &&  y < 19 && organizm[x][y + 1] == NULL){
				stworz(organizm, id, x, y+1);
				nowy = true;
			}
			//else {
			//	nowy = true;
			//}
		}
		flaga = true;
		return false;
	}
		else {
			if (this->si³a > organizm[x][y]->get_si³a()){
				return true;
			}
			else{
				flaga = false;
				return false;
			}
		}
		//return true;
}

void Zwierze::stworz(Organizm* organizm[20][20], int m, int x, int y){
		switch (m)
		{
		case 1:
			organizm[x][y] = new Owca(m);
			organizm[x][y]->set_x(3 * x + X);
			organizm[x][y]->set_y(y + Y);
			organizm[x][y]->set_tura(false);
			organizm[x][y]->rysowanie();
			break;
		case 2:
			organizm[x][y] = new Wilk(m);
			organizm[x][y]->set_x(3 * x + X);
			organizm[x][y]->set_y(y + Y);
			organizm[x][y]->set_tura(true);
			organizm[x][y]->rysowanie();
			break;
		case 3:
			organizm[x][y] = new Antylopa(m);
			organizm[x][y]->set_x(3 * x + X);
			organizm[x][y]->set_y(y + Y);
			organizm[x][y]->set_tura(true);
			organizm[x][y]->rysowanie();
			break;
		case 4:
			organizm[x][y] = new Zolw(m);
			organizm[x][y]->set_x(3 * x + X);
			organizm[x][y]->set_y(y + Y);
			organizm[x][y]->rysowanie();
			break;
		case 5:
			organizm[x][y] = new Lis(m);
			organizm[x][y]->set_x(3 * x + X);
			organizm[x][y]->set_y(y + Y);
			organizm[x][y]->rysowanie();
			break;
	}
}