#pragma once
#include "Organizm.h" 
#include "Conio2.h"

class Zwierze : public Organizm {
public:
	virtual void akcja(Organizm *organizm[20][20]); 
	virtual bool kolizja(Organizm* organizm[20][20], int x, int y);
};