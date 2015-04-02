#pragma once
#include <iostream>
#include "Organizm.h" 
using namespace std;

class Zwierze : public Organizm {
	//int si³a;
	//int inicjatywa;
	//int x;
	//int y;
public:
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
};