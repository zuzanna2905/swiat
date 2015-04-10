#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Czlowiek : public Zwierze {
public:
	Czlowiek();
	~Czlowiek();
	virtual void akcja(Organizm * organizm[20][20]);
	void kolizja();
	void rysowanie();

};