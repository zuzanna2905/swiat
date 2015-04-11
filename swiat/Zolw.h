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
	Zolw();
	~Zolw();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual void kolizja();
	void rysowanie();
};