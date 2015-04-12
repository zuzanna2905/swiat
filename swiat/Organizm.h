#pragma once
#include <list>

class Organizm {
protected:
	int si³a;
	int inicjatywa;
	int wiek;
	bool tura;
	int x;
	int y;
	int id;
public:
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>&) = 0;
	virtual bool kolizja(Organizm *organizm[20][20], int x, int y, bool &flaga, std::list <Organizm*>&) = 0;
	void stworz(Organizm* organizm[20][20], int m, int x, int y, std::list<Organizm*>& inicjatywy);
	virtual void rysowanie() = 0;
	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
	void set_tura(bool tura){ this->tura = tura; };
	void zwieksz_si³e(){ si³a += 3; };
	bool get_tura(){ return tura; };
	void rosnij(){ wiek++; };
	int get_wiek(){ return wiek; };
	int get_id(){ return id; };
	int get_si³a(){ return si³a; };
	int get_inicjatywa(){ return inicjatywa; };
	
};