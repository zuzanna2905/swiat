#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Antylopa : public Zwierze {
	int si�a;
	int inicjatywa;
	int x;
	int y;
	// Swiat & ziemia;
public:
	Antylopa();
	~Antylopa();
	void akcja();
	void kolizja();
};