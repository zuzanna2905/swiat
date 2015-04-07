#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Czlowiek : public Zwierze {
public:
	Czlowiek();
	~Czlowiek();
	void akcja();
	void kolizja();
	void rysowanie();

};