#pragma once
#include <iostream>
#include "Organizm.h" 
using namespace std;

class Roslina : public Organizm {
	//int si�a;
	//int inicjatywa;
	//int x;
	//int y;
public:
	virtual void akcja(Organizm *organizm[20][20]) = 0;
	virtual void kolizja() = 0;
};