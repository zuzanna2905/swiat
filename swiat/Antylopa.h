#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Antylopa : public Zwierze {
	//int si³a;
	//int inicjatywa;
	//int x;
	//int y;
	// Swiat & ziemia;
public:
	Antylopa(int m);
	~Antylopa();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual void kolizja(Organizm *organizm[20][20], int x, int y);
	void rysowanie();
};