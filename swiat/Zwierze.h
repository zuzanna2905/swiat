#pragma once
#include "Organizm.h" 
#include "Conio2.h"
#include <list>

class Zwierze : public Organizm {
	void stworz(Organizm* organizm[20][20], int m, int x, int y, std::list<Organizm*>&);
public:
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy, int i);
	virtual bool kolizja(Organizm* organizm[20][20], int x, int y, bool& flaga, std::list <Organizm*>&);
};