#include <iostream>
#include "Antylopa.h"
using namespace std;

Antylopa::Antylopa()
{
	si³a = 4;
	inicjatywa = 4;
}

Antylopa::~Antylopa(){}

void Antylopa::akcja(Organizm * organizm[20][20]) {
	Organizm *tmp = organizm[(x - 7)/3][y]; // 7 to X
	int x1 = x;
	organizm[(x - 7) / 3][y] = NULL;
	int a = rand() % 4;
	if (a == 0){ x1 = (x - 7) / 3 + 1; x += 3; }
	else if (a == 1){ x1 = (x - 7) / 3 - 1; x -= 3; }
	else if (a == 2){ y += 1; }
	else{ y -= 1; }
	organizm[(x1 - 7) / 3][y] = tmp;
	tmp = NULL;

}

void Antylopa::kolizja(){
	cout << "gowno" << endl;
}

void Antylopa::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("A");
	gotoxy(x, y);
}