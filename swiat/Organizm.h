#pragma once
#include <iostream>
#include "Conio2.h"

class Organizm {
protected:
	int si³a;
	int inicjatywa;
	int wiek;
	bool tura;
	int x;
	int y;
public:
	virtual void akcja(Organizm *organizm[20][20])  = 0; 
	virtual void kolizja(Organizm* pOrganizm) = 0;
	virtual void rysowanie() = 0;
	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
	void set_tura(bool tura){ this->tura = tura; };
	bool get_tura(){ return tura; };
	void rosnij(){ wiek++; };
	int get_wiek(){ return wiek; };
};