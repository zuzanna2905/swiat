#pragma once
#include "Roslina.h"
#include "Conio2.h"
class Wilcze_jagody :
	public Roslina
{
	int si³a;
	int inicjatywa;
public:
	Wilcze_jagody();
	~Wilcze_jagody();
	void rysowanie();
	void akcja();
	void kolizja();
};

