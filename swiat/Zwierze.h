#pragma once
#include "Organizm.h" 
#include "Conio2.h"
#include <list>

class Zwierze : public Organizm {
	//char nazwa(int m);
public:
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy);
	virtual bool kolizja(Organizm* organizm[20][20], int x, int y, bool& flaga, std::list <Organizm*>&);
};