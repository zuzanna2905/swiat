#pragma once
#include <iostream>
#include "Conio2.h"
using namespace std;

class Organizm {
protected:
	int si�a;
	int inicjatywa;
	int x;
	int y;
public:
		void akcja(Organizm *organizm[20][20]){
		Organizm *tmp = organizm[(x - 7) / 3][y]; // 7 to X
		int x1 = x;
		int a = rand() % 4;
		gotoxy(x, y);
		cputs(" ");
			if (a == 0 && x < 65){
				organizm[(x - 7) / 3][y] = NULL;
				x1 = (x - 7) / 3 + 1;
				x += 3;
			}
			else if (a == 1 && x > 7){
				organizm[(x - 7) / 3][y] = NULL;
				x1 = (x - 7) / 3 - 1;
				x -= 3;
			}
			else if (a == 2 && y < 25){
				organizm[(x - 7) / 3][y] = NULL;
				y += 1;
			}
			else if (a == 3 && y > 6){
				organizm[(x - 7) / 3][y] = NULL;
				y -= 1;
			}
			else {
				akcja(organizm);
			}
		organizm[(x1 - 7) / 3][y] = tmp;
		tmp = NULL;
	};
	virtual void kolizja() = 0;
	virtual void rysowanie() = 0;
	void set_x(int x) { this->x = x; };
	void set_y(int y) { this->y = y; };
};