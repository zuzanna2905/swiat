#include "Owca.h"
#include <iostream>

Owca::Owca(int m){
	si³a = 4;
	inicjatywa = 4;
	wiek = 0; 
	id = m;
}

void Owca::rysowanie(){
	int x = wherex();
	int y = wherey();
	gotoxy(this->x, this->y);
	cputs("O");
	gotoxy(x, y);
}