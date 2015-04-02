#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Wilk : public Zwierze {
	int si³a;
	int inicjatywa;
	int x;
	int y;
	//Swiat & ziemia;
public:
	Wilk();
	~Wilk();
	void akcja();
	void kolizja();
};