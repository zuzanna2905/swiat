#pragma once
#include "Roslina.h"
#include "Conio2.h"

class Guarana : public Roslina {
	int si�a;
	int inicjatywa;
public:
	Guarana(int m);
	~Guarana();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
	void kolizja(Organizm *organizm[20][20], int x, int y);
};

