#pragma once 
#include <iostream>
#include <ctime>
#include "Funkcje.h"
using namespace std;
#define N 20
#define X 7
#define Y 6

void losuj(int x, int y, Organizm * tab[20][20]){
	int m;
	srand(time(NULL));
	m = rand() % 9 +1;
	//m = 1;
	wybierz(m, x, y, tab);
}

void polozenie(Organizm * tab[20][20]){
	int x;
	int y;
	srand(time(NULL));
	x = rand() % 20;
	y = rand() % 20;
	if (tab[x][y] == NULL){
		losuj(x, y, tab);
	}
}

void wybierz(int m, int x, int y, Organizm *tab[20][20]){
	// na razie same antylopy, potem mo�na powi�ksza� wyb�r
	m = 1;
	switch (m)
	{
	case 1:
		tab[x][y] = new Antylopa;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		tab[x][y]->rysowanie();
		break;
	case 2:
		tab[x][y] = new	Guarana;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 3:
		tab[x][y] = new	Lis;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 4:
		tab[x][y] = new	Mlecz;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 5:
		tab[x][y] = new	Owca;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 6:
		tab[x][y] = new	Trawa;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 7:
		tab[x][y] = new	Wilcze_jagody;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 8:
		tab[x][y] = new	Wilk;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	case 9:
		tab[x][y] = new	Zolw;
		tab[x][y]->set_x(3*x + X);
		tab[x][y]->set_y(y + Y);
		//tab[x][y]->rysowanie();
		break;
	default:
		break;
	}
}