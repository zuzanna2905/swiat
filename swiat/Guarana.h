#pragma once
#include "Roslina.h"

class Guarana : public Roslina {
public:
	Guarana(int m);
	~Guarana();
	void rysowanie();
	void akcja(Organizm *organizm[20][20]);
	bool kolizja(Organizm *organizm[20][20], int x, int y);
};

