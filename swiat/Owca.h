#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Owca : public Zwierze {
	int si�a;
	int inicjatywa;
	int x;
	int y;
	//Swiat & ziemia;
public:
	Owca();
	~Owca();
	void akcja();
	void kolizja();
	void rysowanie();
};