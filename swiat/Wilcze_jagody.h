#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Wilcze_jagody :
	public Roslina
{
	//int si³a;
	//int inicjatywa;
public:
	Wilcze_jagody(int m);
	~Wilcze_jagody();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
	void kolizja(Organizm *organizm[20][20], int x, int y);
};

