#pragma once
#include <iostream>
using namespace std;

class Organizm {
protected:
	int si�a;
	int inicjatywa;

public:
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
	virtual void rysowanie() = 0;
	int x;
	int y;
};