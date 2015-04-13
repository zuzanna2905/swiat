#include <iostream>
#include "Swiat.h"
#include "Conio2.h"
#include "Organizm.h"
#include "Czlowiek.h"
#include <ctime>
#include <algorithm>
using namespace std;
#define N 20
#define X 7
#define Y 6

//sortowanie ruszania
class OrganizmSort {
	public:
		bool operator() (Organizm* a, Organizm* b) {
			//poruszanie wg inicjatyw
			if (a->get_inicjatywa() <b->get_inicjatywa() || a->get_inicjatywa() > b->get_inicjatywa()) {
				return a->get_inicjatywa() > b->get_inicjatywa();
			}
			else { // jak inicjatywy sa rowne to decyduje wiek
				return a->get_wiek() > b->get_wiek();
			}
		}

};

//konstruowanie œwiata
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
	organizm[0][0] = new Czlowiek;
	organizm[0][0]->set_x(7);
	organizm[0][0]->set_y(6);
	organizm[0][0]->rysowanie();
	inicjatywy.push_back(organizm[0][0]);
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

// rysuje dla kazdej tury
void Swiat::rysujObiekty() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (organizm[i][j] != NULL) {
				organizm[i][j]->rysowanie();
			}
		}
	}
}

void Swiat::wykonajTure(int &x, int &y, bool moc){
	// jak wcisnelismy super moc to przekazujemy to do czlowieka
	if (moc) {
			for (std::list<Organizm*>::iterator it = inicjatywy.begin(); it != inicjatywy.end(); it++) {
				if ((*it)->get_id() == 10) {
					dynamic_cast<Czlowiek*>((*it))->super_moc(moc);
				}
			}
	}
	// tura bez super mocy czlowieka
	else {
		inicjatywy.sort(OrganizmSort());
		for (std::list<Organizm*>::iterator it = inicjatywy.begin(); it != inicjatywy.end();) {
			if ((*it) != NULL && !(*it)->get_tura()) {
				if ((*it)->get_id() == 10) {
					dynamic_cast<Czlowiek*>((*it))->przesun(x, y);
				}
				if ((*it)->akcja(organizm, inicjatywy)) {
					inicjatywy.remove((*it++));
				}
				else {
					if ((*it)->get_id() == 10) {
						x = dynamic_cast<Czlowiek*>((*it))->get_x();
						y = dynamic_cast<Czlowiek*>((*it))->get_y();
					}
					++it;
				}
			}
			else {
				++it;
			}
		}
		rysujObiekty();
		zakonczTure();
	}
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

// losowanie jakie to zwierzatko
void Swiat::losuj(int x, int y){
		int m;
		m = rand() % 9 + 1;
		wybierz(m, x, y);
}

// losowanie x i y w tablicy
void Swiat::polozenie(){
	int x = 0;
	int y = 0;
	for (int i = 0; i < 30; i++){
		x = rand() % 20;
		y = rand() % 20;
		if (organizm[x][y] == NULL){
			losuj(x, y);
		}
	}
}

// wypelnianie swiata obiektami
void Swiat::wybierz(int m, int x, int y){
	switch (m)
	{
	case 1:
		organizm[x][y] = new Owca(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 2:
		organizm[x][y] = new Wilk(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 3:
		organizm[x][y] = new Antylopa(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 4:
		organizm[x][y] = new Zolw(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 5:
		organizm[x][y] = new Lis(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 6:
		organizm[x][y] = new Trawa(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 7:
		organizm[x][y] = new Wilcze_jagody(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 8:
		organizm[x][y] = new Guarana(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	case 9:
		organizm[x][y] = new Mlecz(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(false);
		organizm[x][y]->rysowanie();
		inicjatywy.push_back(organizm[x][y]);
		break;
	default:
		break;
	}
}
