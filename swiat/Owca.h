#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Owca : public Zwierze {
	int si³a;
	int inicjatywa;
	//Swiat & ziemia;
public:
	Owca();
	~Owca();
	void akcja(Organizm *organizm[20][20]);
	void kolizja();
	void rysowanie();
};