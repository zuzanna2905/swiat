#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Zolw : public Zwierze {
	int si�a;
	int inicjatywa;
	//Swiat & ziemia;
public:
	Zolw();
	~Zolw();
	void akcja();
	void kolizja();
	void rysowanie();
};