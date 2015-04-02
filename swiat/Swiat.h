#pragma once
#include <iostream>
#include "Organizm.h"
#define N 20
using namespace std;

class Swiat {
	Organizm *ogranizm[N][N];
	void rysujPlansze();

public:
	Swiat();
	~Swiat();
	void wykonajTure();
	void rysujSwiat();
	void rysujObiekty();
};