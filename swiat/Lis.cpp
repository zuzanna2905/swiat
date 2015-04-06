#include "Lis.h"
#include <iostream>
using namespace std;

Lis::Lis(){
	si³a = 3;
	inicjatywa = 7;
}


void Lis::akcja(){}

void Lis::kolizja(){}

void Lis::rysowanie(){
	gotoxy(9, 10);
	cputs("L");
}