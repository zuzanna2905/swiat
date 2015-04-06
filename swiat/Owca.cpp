#include "Owca.h"
#include <iostream>
using namespace std;

Owca::Owca(){
	si³a = 4;
	inicjatywa = 4;
}


void Owca::akcja(){}

void Owca::kolizja(){}

void Owca::rysowanie(){
	gotoxy(13, 6);
	cputs("G");
}