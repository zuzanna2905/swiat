#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Wilk : public Zwierze {
	//int si�a;
	//int inicjatywa;
	//Swiat & ziemia;
public:
	Wilk();
	~Wilk();
	void kolizja();
	void rysowanie();
};