#pragma once
#include "Zwierze.h"

class Lis : public Zwierze {
public:
	Lis(int m);
	~Lis();
	virtual void akcja(Organizm *organizm[20][20]);
	void rysowanie();
};