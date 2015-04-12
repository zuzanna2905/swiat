#pragma once
#include "Organizm.h" 
#include "Conio2.h"
#include "Antylopa.h"
#include "Guarana.h"
#include "Lis.h"
#include "Mlecz.h"
#include "Owca.h"
#include "Trawa.h"
#include "Wilcze_jagody.h"
#include "Wilk.h"
#include "Zolw.h"

class Zwierze : public Organizm {
	// void stworz(Organizm* organizm[20][20], int m, int x, int y);
public:
	virtual void akcja(Organizm *organizm[20][20]); 
	virtual bool kolizja(Organizm* organizm[20][20], int x, int y);
};