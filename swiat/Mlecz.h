#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Mlecz : public Roslina
{
	int si�a;
	int inicjatywa;
public:
	Mlecz();
	~Mlecz();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
	void kolizja();
};

