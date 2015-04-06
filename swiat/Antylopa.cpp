#include <iostream>
#include "Antylopa.h"
using namespace std;

Antylopa::Antylopa()
{
	si³a = 4;
	inicjatywa = 4;
}

Antylopa::~Antylopa(){}

void Antylopa::akcja(){}

void Antylopa::kolizja(){
	cout << "gowno" << endl;
}

void Antylopa::rysowanie(){
	gotoxy(7,6);
	cputs("A");
}