#pragma once
#include "Zwierze.h"

class Czlowiek : public Zwierze {
	int mov_x;
	int mov_y;
public:
	Czlowiek();
	~Czlowiek();
	virtual bool akcja(Organizm* organizm[20][20], std::list<Organizm*>& inicjatywy);
	void rysowanie();
	void przesun(int, int);
};