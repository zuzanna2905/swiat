#pragma once
#include <iostream>
#include <ctime>
#include "Organizm.h" 
using namespace std;

class Zwierze : public Organizm {
	//int si�a;
	//int inicjatywa;
	//int x;
	//int y;
public:
	virtual void akcja(Organizm *organizm[20][20]) //= 0;  
	{
        Organizm *tmp = organizm[(x - 7) / 3][y - 6]; // 7 to X
		int x1 = (x - 7) / 3;
		int y1 = y - 6;
		int a = rand() % 4;
		gotoxy(x, y);
		if (a == 0 && x < 65){
			organizm[x1][y1] = NULL;
			cputs(" ");
			x1 += 1;
			x += 3;
		}
		else if (a == 1 && x > 7){
			organizm[x1][y1] = NULL;
			cputs(" ");
			x1 -= 1;
			x -= 3;
		}
		else if (a == 2 && y < 25){
			organizm[x1][y1] = NULL;
			cputs(" ");
			y1 += 1;
			y += 1;
		}
		else if (a == 3 && y > 6){
			organizm[x1][y1] = NULL;
			cputs(" ");
			y1 -= 1;
			y -= 1;
		}
		else {
			akcja(organizm);
			return;
		}
		if (organizm[x1][y1] != NULL) {
			kolizja();
		}
		organizm[x1][y1] = tmp;
		organizm[x1][y1]->set_tura(true);
		tmp = NULL;
		delete tmp;
	};

	 virtual void kolizja()
	 {
		 cout << "+" << endl;
	 };
};