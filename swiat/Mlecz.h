#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Mlecz : public Roslina
{
	int si³a;
	int inicjatywa;
public:
	Mlecz(int m);
	~Mlecz();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
};

