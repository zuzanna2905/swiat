#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Czlowiek : public Zwierze {
	//int si³a;
	//int inicjatywa;
	//int x;
	//int y;
	// Swiat & ziemia;
public:
	Czlowiek();
	~Czlowiek();
	void akcja();
	void kolizja();
	void rysowanie();

};