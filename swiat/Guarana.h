#pragma once
#include "Roslina.h"
#include "Conio2.h"

class Guarana : public Roslina {
	int si�a;
	int inicjatywa;
public:
	Guarana();
	~Guarana();
	void rysowanie();
	void akcja();
	void kolizja();
};

