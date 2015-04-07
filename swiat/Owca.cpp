#include "Owca.h"
#include <iostream>
using namespace std;

Owca::Owca(){
	si³a = 4;
	inicjatywa = 4;
}

void Owca::akcja(Organizm *organizm[20][20]) {
	Organizm *tmp = organizm[x][y];
	int x1 = x;
	organizm[x][y] = NULL;
	int a = rand() % 4;
	if (a == 0){ x1 = x + 1; x += 3; }
	else if (a == 1){ x1 = x - 1; x -= 3; }
	else if (a == 2){ y += 1; }
	else{ y -= 1; }
	organizm[x1][y] = tmp;
	tmp = NULL;

}

void Owca::kolizja(){}

void Owca::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("O");
	gotoxy(x, y);
}