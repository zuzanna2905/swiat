#pragma once
#include <iostream>
#include <ctime>
#include "Organizm.h" 
using namespace std;

class Zwierze : public Organizm {
	//int si³a;
	//int inicjatywa;
	//int x;
	//int y;
public:
	virtual void akcja() {
		int a = 0;
		srand(time(NULL));
		a = rand() % 4;
		if (a == 0){ x += 1; }
		else if (a == 1){ x -= 1; }
		else if (a == 2){ y += 1; }
		else{ y -= 1; }
	};
	virtual void kolizja() = 0;
};