#include "Guarana.h"
#include <iostream>
using namespace std;

Guarana::Guarana()
{
	si³a = 0;
	inicjatywa = 0;
}


Guarana::~Guarana()
{
}

void Guarana::rysowanie(){
	gotoxy(9, 6);
	cputs("G");
}

void Guarana::akcja(){}

void Guarana::kolizja(){}