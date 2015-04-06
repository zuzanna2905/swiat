#include <iostream>
#include "Swiat.h"
#include "Conio2.h"
#include "Organizm.h"
#include "Czlowiek.h"
#include "Funkcje.h"
using namespace std;

Swiat::Swiat(){
	settitle("Zuzanna Pusiewicz 155178");
	textbackground(BLACK);
	clrscr();

	// ustawienie wszystkich elementów tablicy na NULL'a
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			organizm[i][j] = NULL;
		}
	}
	//zak³adam sobie, ¿e cz³owiek zawsze zaczyna w 0 0
	organizm[0][0] = new Czlowiek;
	organizm[0][0]->set_x(6);
	organizm[0][0]->set_y(2);
	// przy ruchu zmienia siê index w tablicy ogranizm
	for (int i = 0; i < 20; i++){
		polozenie(organizm);
	}
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