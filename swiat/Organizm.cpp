#include "Organizm.h"
#include "Zwierze.h"
#include "Roslina.h"
#include "Owca.h"
#include "Wilk.h"
#include "Antylopa.h"
#include "Lis.h"
#include "Zolw.h"
#include "Guarana.h"
#include "Mlecz.h"
#include "Trawa.h"
#include "Wilcze_jagody.h"
#define X 7
#define Y 6

void Organizm::stworz(Organizm* organizm[20][20], int m, int x, int y, std::list<Organizm*>& inicjatywy){
	switch (m)
	{
	case 1:
		organizm[x][y] = new Owca(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 2:
		organizm[x][y] = new Wilk(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 3:
		organizm[x][y] = new Antylopa(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 4:
		organizm[x][y] = new Zolw(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 5:
		organizm[x][y] = new Lis(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 6:
		organizm[x][y] = new Trawa(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 7:
		organizm[x][y] = new Wilcze_jagody(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 8:
		organizm[x][y] = new Guarana(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	case 9:
		organizm[x][y] = new Mlecz(m);
		organizm[x][y]->set_x(3 * x + X);
		organizm[x][y]->set_y(y + Y);
		organizm[x][y]->set_tura(true);
		//organizm[x][y]->rysowanie();
		inicjatywy.push_front(organizm[x][y]);
		break;
	}
}