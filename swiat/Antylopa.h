#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Antylopa : public Zwierze {
	//int si�a;
	//int inicjatywa;
	//int x;
	//int y;
	// Swiat & ziemia;
public:
	Antylopa();
	~Antylopa();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual void kolizja(Organizm* pOrganizm);
	void rysowanie();
};