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
	//virtual void akcja() {
	virtual void akcja(Organizm *organizm[20][20]) {
		Organizm *tmp = organizm[x][y];
		int x1 = x;
		organizm[x][y] = NULL;
		int a = rand() % 4;
		if (a == 0){ x1 = x + 1; x += 3; }
		else if (a == 1){ x1 = x - 1; x -= 3; }
		else if (a == 2){ y += 1; }
		else{ y -= 1; }
		organizm[x1][y] = tmp;
		tmp = NULL;

	};
	 void kolizja(){};
};