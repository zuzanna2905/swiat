#include "Mlecz.h"
#include <iostream>
using namespace std;

Mlecz::Mlecz()
{
	si³a = 0;
	inicjatywa = 0;
}


Mlecz::~Mlecz()
{
}

void Mlecz::rysowanie(){
	gotoxy(9, 13);
	cputs("G");
}

void Mlecz::akcja(){}

void Mlecz::kolizja(){}