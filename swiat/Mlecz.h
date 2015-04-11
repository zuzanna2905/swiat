#pragma once
#include "Roslina.h"

class Mlecz : public Roslina
{
public:
	Mlecz(int m);
	~Mlecz();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
};

