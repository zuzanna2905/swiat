#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Owca : public Zwierze {
	int si�a;
	int inicjatywa;
	//Swiat & ziemia;
public:
	Owca();
	~Owca();
	void kolizja();
	void rysowanie();
};