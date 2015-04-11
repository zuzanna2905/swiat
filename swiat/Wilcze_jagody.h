#pragma once
#include "Roslina.h"

class Wilcze_jagody :
	public Roslina
{
public:
	Wilcze_jagody(int m);
	~Wilcze_jagody();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
	bool kolizja(Organizm *organizm[20][20], int x, int y);
};

