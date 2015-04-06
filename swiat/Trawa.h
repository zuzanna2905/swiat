#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Trawa :
	public Roslina
{
	int si³a;
	int inicjatywa;
public:
	Trawa();
	~Trawa();
	void rysowanie();
	void akcja();
	void kolizja();
};

