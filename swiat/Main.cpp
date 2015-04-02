#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Conio2.h"
#include "Organizm.h"
#include "Swiat.h"
#define N 20
using namespace std;

void losuj(){
	int m;
	srand(time(NULL));
	for (int i = 0; i < N; i++){
		m = rand() % 9 ;
//		wybierz(m);
	}
}

void polozenie(){
	int x;
	int y;
	srand(time(NULL));
	x = rand() % 20;
	y = rand() % 20;
}

void wybierz(int m){
	switch (m)
	{
	case 1:
//		antylopa();
	case 2:
//		guarana();
	case 3:
//		lis();
	case 4:
//		mlecz();
	case 5:
//		owca();
	case 6:
//		trawa();
	case 7:
//		wilcze_jagody();
	case 8:
//		wilk();
	case 9:
//		zolw();
		cout << "abcd" << endl;
		break;
	default:
		break;
	}
}

int main(){
	Swiat swiat;
	char zn;
	int x = 8;
	int y = 8;
	swiat.rysujSwiat();
	gotoxy(x,y);
	do {
		zn = getch();
		if (zn == 0x48) y -= 2;
		else if (zn == 0x50) y += 2;
		else if (zn == 0x4b) x -= 4;
		else if (zn == 0x4d) x += 4;
		gotoxy(x,y);
		swiat.rysujObiekty();
	} while (zn != 'q');
	return 0;
}