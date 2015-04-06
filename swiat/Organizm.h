#pragma once
#include <iostream>
using namespace std;

class Organizm {
protected:
	int si³a;
	int inicjatywa;
	int x;
	int y;

public:
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
	virtual void rysowanie() = 0;
	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
};