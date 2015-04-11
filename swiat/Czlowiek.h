#pragma once
#include "Zwierze.h"

class Czlowiek : public Zwierze {
public:
	Czlowiek();
	~Czlowiek();
	virtual void akcja(Organizm * organizm[20][20]);
	bool kolizja();
	void rysowanie();

};