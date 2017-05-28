#pragma once
#include "Zwierze.h"

class Zolw : public Zwierze {
public:
	Zolw(int m);
	~Zolw();
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy);
	void rysowanie();
};