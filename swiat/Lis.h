#pragma once
#include <iostream>
#include "Zwierze.h"
#include "Conio2.h"
using namespace std;

class Lis : public Zwierze {
	int si³a;
	int inicjatywa;
	int x;
	int y;
	//Swiat & ziemia;
public:
	Lis();
	~Lis();
	void akcja();
	void kolizja();
	void rysowanie();
};