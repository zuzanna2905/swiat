#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Mlecz : public Roslina
{
	int si³a;
	int inicjatywa;
public:
	Mlecz();
	~Mlecz();
	void rysowanie();
	void akcja();
	void kolizja();
};

