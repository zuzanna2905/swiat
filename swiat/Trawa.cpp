#include "Trawa.h"
#include <iostream>
using namespace std;


Trawa::Trawa()
{
	si³a = 0;
	inicjatywa = 0;
}


Trawa::~Trawa()
{
}

void Trawa::rysowanie(){
	gotoxy(15, 6);
	cputs("T");
}

void Trawa::akcja(){}

void Trawa::kolizja(){}