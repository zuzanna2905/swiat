#pragma once
#include "Organizm.h"
#include "Conio2.h"

class Roslina : public Organizm {
public:
	virtual void akcja(Organizm *organizm[20][20]) = 0;
	virtual bool kolizja() = 0;
};