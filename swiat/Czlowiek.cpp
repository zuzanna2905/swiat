#include <iostream>
#include "Conio2.h"
#include "Czlowiek.h"
using namespace std;

Czlowiek::Czlowiek(){
	si³a = 5;
	inicjatywa = 4;
}

Czlowiek::~Czlowiek(){}


void Czlowiek::akcja(){}

void Czlowiek::kolizja(){}

void Czlowiek::rysowanie(){
	gotoxy(this->x, this->y);
	cputs("X");
}