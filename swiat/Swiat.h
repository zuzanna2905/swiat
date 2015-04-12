#pragma once
#include "Organizm.h"
#include "Antylopa.h"
#include "Guarana.h"
#include "Lis.h"
#include "Mlecz.h"
#include "Owca.h"
#include "Trawa.h"
#include "Wilcze_jagody.h"
#include "Wilk.h"
#include "Zolw.h"
#include <list>
#define N 20
using namespace std;

class Swiat {
	Organizm *organizm[N][N];
	list < Organizm* > inicjatywy;
	void rysujPlansze();
	void losuj(int, int);
	void wybierz(int, int, int);
	void polozenie();
	void zakonczTure();
public:
	Swiat();
	~Swiat();
	void wykonajTure();
	void rysujSwiat();
	void rysujObiekty();
};