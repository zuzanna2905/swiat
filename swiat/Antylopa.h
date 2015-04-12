#pragma once
#include "Organizm.h" 
#include "Zwierze.h"

class Antylopa : public Zwierze {
	//void uciekaj(Organizm *organizm[20][20], int x, int y, std::list<Organizm*>& inicjatywy);
public:
	Antylopa(int m);
	~Antylopa();
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>&, int i);
	//virtual bool kolizja(Organizm *organizm[20][20], int x, int y, bool& flaga, std::list<Organizm*>&);
	void rysowanie();
};