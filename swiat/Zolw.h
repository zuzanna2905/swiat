#pragma once
#include <iostream>
#include "Zwierze.h"
using namespace std;

class Zolw : public Zwierze {
	int si³a;
	int inicjatywa;
	int x;
	int y;
	//Swiat & ziemia;
public:
	Zolw();
	~Zolw();
	void akcja();
	void kolizja();
};