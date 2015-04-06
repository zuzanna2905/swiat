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
	gotoxy(9, 16);
	cputs("J");
}

void Wilcze_jagody::akcja(){}

void Wilcze_jagody::kolizja(){}