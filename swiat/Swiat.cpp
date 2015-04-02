#include <iostream>
#include "Swiat.h"
#include "Conio2.h"
#include "Organizm.h"
#include "Czlowiek.h"
using namespace std;

Swiat::Swiat(){
	settitle("Zuzanna Pusiewicz 155178");
	textbackground(BLACK);
	clrscr();

	// alokacja tablicy
	//organizm = new 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			this->ogranizm[i][j] = NULL;
		}
	}
	// clowiek zaczyna w 0 0
	this->ogranizm[0][0] = new Czlowiek;

	this->ogranizm[0][0]->x = 6;
	this->ogranizm[0][0]->y = 6;

	// przy ruchu zmienia siê index w tablicy ogranizm
	//bonczek


}

Swiat::~Swiat(){}

void Swiat::rysujSwiat(){
	rysujPlansze();
	rysujObiekty();
}

void Swiat::rysujPlansze(){
	int x = 5;
	int y = 5;
	int x2 = 71;
	int y2 = 26;
	gotoxy(x, y);
	for (int i = 0; i < 22; i ++){
		gotoxy(x, y+i);
		cputs("#");
	}
	for (int i = 0; i < 66; i++){
		gotoxy(x + i, y);
		cputs("#");
	}
	for (int i = 0; i < 66; i++){
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
			if (this->ogranizm[i][j] != NULL) {
				this->ogranizm[i][j]->rysowanie();
			}
		}
	}
}