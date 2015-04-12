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

// usun inty i
bool Zwierze::akcja(Organizm* organizm[20][20], std::list<Organizm*>& inicjatywy){
	bool usun = false;
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
		cputs(" ");
		x1 += 1;
		x += 3;
	}
	else if (a == 1 && x > 7){
		cputs(" ");
		x1 -= 1;
		x -= 3;
	}
	else if (a == 2 && y < 25){
		cputs(" ");
		y1 += 1;
		y += 1;
	}
	else if (a == 3 && y > 6){
		cputs(" ");
		y1 -= 1;
		y -= 1;
	}
	else {
		return akcja(organizm, inicjatywy);
	}
	bool flaga = false; // ginie/mnozenie
	if (organizm[x1][y1] != NULL) {
		if (kolizja(organizm, x1, y1, flaga, inicjatywy))
		{
			// ginie atakowany
			inicjatywy.remove(organizm[x1][y1]);
			organizm[x1_old][y1_old] = NULL;
			organizm[x1][y1] = tmp;
			organizm[x1][y1]->set_tura(true);
		}
		else{
			if (flaga || id == 5) {
				// rozmnazanie lub lis nie wchodzi na silniejszy
				organizm[x1_old][y1_old] = tmp;
				organizm[x1_old][y1_old]->set_tura(true);
				x = x_old;
				y = y_old;
			}
			else {
				// ginie atakujacy
				organizm[x1_old][y1_old] = NULL; // ginie
				//inicjatywy.remove(tmp);
				usun = true;
			}
		}
	}
	else {
		organizm[x1_old][y1_old] = NULL;
		organizm[x1][y1] = tmp;
		organizm[x1][y1]->set_tura(true);
	}
	tmp = NULL;
	delete tmp;

	return usun;
}

bool Zwierze::kolizja(Organizm* organizm[20][20], int x, int y, bool& flaga, std::list<Organizm*>& inicjatywy){
	if (id == organizm[x][y]->get_id())
	{
		bool nowy = false;
		int licznik = 0;
		while (!nowy){
			licznik++;
			int z = rand() % 8;
			if (z == 0 && x < 19 && organizm[x + 1][y] == NULL){
				stworz(organizm, id, x + 1, y, inicjatywy);
				nowy = true;
			}
			else if (z == 1 && x > 0 && organizm[x - 1][y] == NULL){
				stworz(organizm, id, x - 1, y, inicjatywy);
				nowy = true;
			}
			else if (z == 2 && x < 19 && y <19 && organizm[x + 1][y + 1] == NULL){
				stworz(organizm, id, x + 1, y + 1, inicjatywy);
				nowy = true;
			}
			else if (z == 3 && x < 19 && y >0 && organizm[x + 1][y - 1] == NULL){
				stworz(organizm, id, x + 1, y - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 4 && x> 0 && y <19 && organizm[x - 1][y + 1] == NULL){
				stworz(organizm, id, x - 1, y + 1, inicjatywy);
				nowy = true;
			}
			else if (z == 5 && x> 0 && y >0 && organizm[x - 1][y - 1] == NULL){
				stworz(organizm, id, x - 1, y - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 6 && y >0	&&	organizm[x][y - 1] == NULL){
				stworz(organizm, id, x, y - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 7 &&  y < 19 && organizm[x][y + 1] == NULL){
				stworz(organizm, id, x, y + 1, inicjatywy);
				nowy = true;
			}
			else if (licznik > 10000) {
				// nie ma miejsca na rozmnazanie
				nowy = true;
			}
		}
		flaga = true;
		return false;
	}
		else {
			if (this->si³a < 5 && organizm[x][y]->get_id()==4){ // zolw odparl atak
 				flaga = true;
				return false;
			}
			else if (this->si³a > organizm[x][y]->get_si³a()){
				return true;
			}
			else{
				flaga = false;
				return false;
			}
		}
}
