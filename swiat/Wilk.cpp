#include "Wilk.h"
#include <iostream>
using namespace std;

Wilk::Wilk(){
	si³a = 9;
	inicjatywa = 5;
}


void Wilk::akcja(){}

void Wilk::kolizja(){}

void Wilk::rysowanie(){
	gotoxy(19, 6);
	cputs("W");
}