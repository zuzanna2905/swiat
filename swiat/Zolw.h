#pragma once
#include "Zwierze.h"

class Zolw : public Zwierze {
public:
	Zolw(int m);
	~Zolw();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual bool kolizja(Organizm *organizm[20][20], int x, int y);
	void rysowanie();
};