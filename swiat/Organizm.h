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
	virtual bool akcja(Organizm *organizm[20][20], std::list<Organizm*>&, int i) = 0;
	virtual bool kolizja(Organizm *organizm[20][20], int x, int y, bool &flaga, std::list <Organizm*>&) = 0;
	virtual void rysowanie() = 0;
	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
	void set_tura(bool tura){ this->tura = tura; };
	bool get_tura(){ return tura; };
	void rosnij(){ wiek++; };
	int get_wiek(){ return wiek; };
	int get_id(){ return id; };
	int get_si³a(){ return si³a; };
	
	bool operator< (const Organizm &other) const{
		//if (inicjatywa < other.inicjatywa || inicjatywa > other.inicjatywa) {
		//	return inicjatywa < other.inicjatywa;
		//}
		//else { // jak inicjatywy sa rowne to decyduje wiek
		//	return wiek < other.wiek;
		//}

		return inicjatywa < other.inicjatywa;
		
	};
};

//bool sortuj(Organizm* a, Organizm* b) {
//	if (a->inicjatywa <b->inicjatywa || a->inicjatywa > b->inicjatywa) {
//		return a->inicjatywa < b->inicjatywa;
//	}
//	else { // jak inicjatywy sa rowne to decyduje wiek
//		return a->get_wiek() < b->get_wiek();
//	}
//}