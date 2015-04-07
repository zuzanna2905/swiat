#pragma once 
#include <iostream>
#include "Organizm.h"
#include "Zwierze.h"
#include "Antylopa.h"
#include "Guarana.h"
#include "Lis.h"
#include "Mlecz.h"
#include "Owca.h"
#include "Trawa.h"
#include "Wilcze_jagody.h"
#include "Wilk.h"
#include "Zolw.h"

void losuj(int, int, Organizm *tab[][20]);
void polozenie(Organizm *tab[][20]);
void wybierz(int, int, int, Organizm *tab[][20]);