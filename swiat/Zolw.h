#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Zolw : public Zwierze {
	//int si³a;
	//int inicjatywa;
	//Swiat & ziemia;
public:
	Zolw(int m);
	~Zolw();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual void kolizja(Organizm *organizm[20][20], int x, int y);
	void rysowanie();
};