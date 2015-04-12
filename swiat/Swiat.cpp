#include <iostream>
#include "Swiat.h"
#include "Conio2.h"
#include "Organizm.h"
#include "Czlowiek.h"
#include <ctime>
using namespace std;
#define N 20
#define X 7
#define Y 6

Swiat::Swiat(){
	settitle("Zuzanna Pusiewicz 155178");
	textbackground(BLACK);
	clrscr();

	srand(time(NULL));
	// ustawienie wszystkich elementów tablicy na NULL'a
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			organizm[i][j] = NULL;
		}
	}
	//zak³adam sobie, ¿e cz³owiek zawsze zaczyna w 0 0
	/*organizm[0][0] = new Czlowiek;
	organizm[0][0]->set_x(7);
	organizm[0][0]->set_y(6);*/
	// przy ruchu zmienia siê index w tablicy ogranizm
	polozenie();
}


Swiat::~Swiat(){}

void Swiat::rysujSwiat(){
	rysujPlansze();
	rysujObiekty();
}

void Swiat::rysujPlansze(){
	int x = 5;
	int y = 5;
	int x2 = 67;
	int y2 = 26;
	gotoxy(x, y);
	for (int i = 0; i < 22; i ++){
		gotoxy(x, y+i);
		cputs("#");
	}
	for (int i = 0; i < 62; i++){
		gotoxy(x + i, y);
		cputs("#");
	}
	for (int i = 0; i < 62; i++){
		gotoxy(x + i, y2);
		cputs("#");
	}
	for (int i = 0; i < 22; i++){
		gotoxy(x2, y + i);
		cputs("#");
	}
}

void Swiat::rysujObiekty() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (organizm[i][j] != NULL) {
				organizm[i][j]->rysowanie();
			}
		}
	}
}

void Swiat::wykonajTure(){
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (organizm[i][j] != NULL && !organizm[i][j]->get_tura()) {
				organizm[i][j]->akcja(organizm);
			}
		}
	}
	rysujObiekty();
	zakonczTure();
}

void Swiat::zakonczTure(){
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (organizm[i][j] != NULL) {
				organizm[i][j]->set_tura(false);
				organizm[i][j]->rosnij();
			}
		}
	}
}

void Swiat::losuj(int x, int y){
		int m;
		m = rand() % 2 + 1;
		wybierz(m, x, y);
}

void Swiat::polozenie(){
	int x = 0;
	int y = 0;
	for (int i = 0; i < 12; i++){
		x = rand() % 20;
		y = rand() % 20;
		if (organizm[x][y] == NULL){
			losuj(x, y);
		}
	}
}

void Swiat::wybierz(int m, int x, int y){
	//m = 2;
	switch (m)
	{
	case 1:
		organizm[x][y] = new Owca(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		break;
	case 2:
		organizm[x][y] = new Wilk(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		break;
	case 3:
		organizm[x][y] = new Antylopa(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		break;
	case 4:
		organizm[x][y] = new Zolw(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->rysowanie();
		break;
	case 5:
		organizm[x][y] = new Lis(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->rysowanie();
		break;
	//case 6:
	//	organizm[x][y] = new	Trawa;
	//	organizm[x][y]->set_x(3 * x + X);
	//	organizm[x][y]->set_y(y + Y);
	//	organizm[x][y]->rysowanie();
	//	break;
	//case 7:
	//	organizm[x][y] = new	Wilcze_jagody;
	//	organizm[x][y]->set_x(3 * x + X);
	//	organizm[x][y]->set_y(y + Y);
	//	organizm[x][y]->rysowanie();
	//	break;
	//case 8:
	//	organizm[x][y] = new Guarana;
	//	organizm[x][y]->set_x(3 * x + X);
	//	organizm[x][y]->set_y(y + Y);
	//	organizm[x][y]->rysowanie();
	//	break;
	//case 9:
	//	organizm[x][y] = new Mlecz;
	//	organizm[x][y]->set_x(3 * x + X);
	//	organizm[x][y]->set_y(y + Y);
	//	organizm[x][y]->rysowanie();
	//	break;
	default:
		break;
	}
}