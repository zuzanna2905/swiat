#pragma once
#include <iostream>
#include <cstdlib>
#include "Conio2.h"
#include "Organizm.h"
#include "Swiat.h"
using namespace std;

int main(){
	Swiat swiat;
	char zn;
	int x = 7;
	int y = 6;
	swiat.rysujSwiat();
	gotoxy(x,y);/*
	Antylopa a;
	Organizm *b;
	b = &a;
	b->rysowanie();*/
	do {
		zn = getch();
		if (zn == 0x48) y -= 1;
		else if (zn == 0x50) y += 1;
		else if (zn == 0x4b) x -= 3;
		else if (zn == 0x4d) x += 3;
		swiat.wykonajTure();
		gotoxy(x,y);
	} while (zn != 'q');
	return 0;
}