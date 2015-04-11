#pragma once
#include "Roslina.h"

class Trawa :
	public Roslina
{
public:
	Trawa(int m);
	~Trawa();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
};

