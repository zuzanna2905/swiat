#pragma once
#include <iostream>
#include "Organizm.h"
#define N 20
using namespace std;

class Swiat {
	Organizm *organizm[N][N];
	void rysujPlansze();
	void losuj(int, int);
	void wybierz(int, int, int);
	void polozenie();
public:
	Swiat();
	~Swiat();
	void wykonajTure();
	void rysujSwiat();
	void rysujObiekty();
};