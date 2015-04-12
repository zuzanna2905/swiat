#pragma once
#include "Zwierze.h"

class Antylopa : public Zwierze {
public:
	Antylopa(int m);
	~Antylopa();
	virtual void akcja(Organizm *organizm[20][20]);
	virtual bool kolizja(Organizm *organizm[20][20], int x, int y, bool& flaga);
	void rysowanie();
};