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
		void akcja(Organizm *organizm[20][20]){
		Organizm *tmp = organizm[(x - 7) / 3][y]; // 7 to X
		int x1 = x;
		int a = rand() % 4;
		gotoxy(x, y);
		cputs(" ");
		if (a == 0 && x < 61){ x1 = (x - 7) / 3 + 1; x += 3; }
		else if (a == 1 && x > 7){ x1 = (x - 7) / 3 - 1; x -= 3; }
		else if (a == 2 && y < 25){ y += 1; }
		else if (a == 3 && y > 6){ y -= 1; }
		else {
			akcja(organizm);
		}
		organizm[(x - 7) / 3][y] = NULL;
		organizm[(x1 - 7) / 3][y] = tmp;
		tmp = NULL;
	};
	 void kolizja(){};
};