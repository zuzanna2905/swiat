#pragma once
#include "Zwierze.h"
#include <random>
#define X 7
#define Y 6

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
	organizm[x1][y1]->set_tura(true);
	tmp = NULL;
	delete tmp;
}

bool Zwierze::kolizja(Organizm* organizm[20][20], int x, int y){
		//if (id == organizm[x][y]->get_id())
		//{
		//	for (int i = x; i < 20 && i > 0;){
		//		for (int j = y; j < 20 && j >0;){
		//			//int z = rand() % 8;
		//			if (//z = 0 && 
		//				organizm[i+1][j] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 1 && 
		//				organizm[i - 1][j] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 2 && 
		//				organizm[i + 1][j + 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 3 && 
		//				organizm[i + 1][j - 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 4 && 
		//				organizm[i - 1][j + 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 5 && 
		//				organizm[i - 1][j - 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 6 && 
		//				organizm[i][j - 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			else if (//z = 7 && 
		//				organizm[i][j + 1] == NULL){
		//				stworz(organizm, id, i, j);
		//				return false;
		//			}
		//			j++;
		//		} i++;
		//	}
		//}
		//else {
		//	if (this->si³a > organizm[x][y]->get_si³a()){
		//		return true;
		//	}
		//}
		return true;
}

//void Zwierze::stworz(Organizm* organizm[20][20], int m, int x, int y){
//		switch (m)
//		{
//		case 1:
//			organizm[x][y] = new Antylopa(m);
//			organizm[x][y]->set_x(3 * x + X);
//			organizm[x][y]->set_y(y + Y);
//			organizm[x][y]->set_tura(false);
//			organizm[x][y]->rysowanie();
//			break;
//		case 2:
//			organizm[x][y] = new Wilk(m);
//			organizm[x][y]->set_x(3 * x + X);
//			organizm[x][y]->set_y(y + Y);
//			organizm[x][y]->set_tura(false);
//			organizm[x][y]->rysowanie();
//			break;
//		case 3:
//			organizm[x][y] = new Owca(m);
//			organizm[x][y]->set_x(3 * x + X);
//			organizm[x][y]->set_y(y + Y);
//			organizm[x][y]->set_tura(false);
//			organizm[x][y]->rysowanie();
//			break;
//		case 4:
//			organizm[x][y] = new Zolw(m);
//			organizm[x][y]->set_x(3 * x + X);
//			organizm[x][y]->set_y(y + Y);
//			organizm[x][y]->rysowanie();
//			break;
//		case 5:
//			organizm[x][y] = new Lis(m);
//			organizm[x][y]->set_x(3 * x + X);
//			organizm[x][y]->set_y(y + Y);
//			organizm[x][y]->rysowanie();
//			break;
//	}
//}