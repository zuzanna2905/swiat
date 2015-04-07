#include "Wilcze_jagody.h"
#include <iostream>
using namespace std;


Wilcze_jagody::Wilcze_jagody()
{
	si³a = 99;
	inicjatywa = 0;
}


Wilcze_jagody::~Wilcze_jagody()
{
}

void Wilcze_jagody::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("J");
	gotoxy(x, y);
}

void Wilcze_jagody::akcja(){}

void Wilcze_jagody::kolizja(){}