#pragma once
#include "Roslina.h"

class Mlecz : public Roslina
{
public:
	Mlecz(int m);
	~Mlecz();
	void rysowanie();
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy);
};

