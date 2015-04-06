#include "Zolw.h"
#include <iostream>
using namespace std;

Zolw::Zolw(){
	si³a = 2;
	inicjatywa = 1;
}


void Zolw::akcja(){}

void Zolw::kolizja(){}

void Zolw::rysowanie(){
	gotoxy(20, 15);
	cputs("Z");
}