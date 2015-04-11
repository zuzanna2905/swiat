#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Trawa :
	public Roslina
{
	int si³a;
	int inicjatywa;
public:
	Trawa(int m);
	~Trawa();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
};

