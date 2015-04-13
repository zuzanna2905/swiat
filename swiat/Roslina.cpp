#include "Roslina.h"

// rozsiewanie siê na wolne pole obok
// jak nie ma miejsca to siê nie rozsiewa
bool Roslina::akcja(Organizm *organizm[20][20], std::list<Organizm*>& inicjatywy){
	int a = rand() % 100;
	bool nowy = false;
	int licznik = 0;
	int x1 = (x - 7) / 3;
	int y1 = y - 6;
	if (a < 1){
		while (!nowy){
			licznik++;
			int z = rand() % 8;
			if (z == 0 && x1 < 19 && organizm[x1 + 1][y1] == NULL){
				stworz(organizm, id, x1 + 1, y1, inicjatywy);
				nowy = true;
			}
			else if (z == 1 && x1 > 0 && organizm[x1 - 1][y1] == NULL){
				stworz(organizm, id, x1 - 1, y1, inicjatywy);
				nowy = true;
			}
			else if (z == 2 && x1 < 19 && y1 < 19 && organizm[x1 + 1][y1 + 1] == NULL){
				stworz(organizm, id, x1 + 1, y1 + 1, inicjatywy);
				nowy = true;
			}
			else if (z == 3 && x1 < 19 && y1 >0 && organizm[x1 + 1][y1 - 1] == NULL){
				stworz(organizm, id, x1 + 1, y1 - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 4 && x1> 0 && y1 < 19 && organizm[x1 - 1][y1 + 1] == NULL){
				stworz(organizm, id, x1 - 1, y1 + 1, inicjatywy);
				nowy = true;
			}
			else if (z == 5 && x1> 0 && y1 > 0 && organizm[x1 - 1][y1 - 1] == NULL){
				stworz(organizm, id, x1 - 1, y1 - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 6 && y1 > 0 && organizm[x1][y1 - 1] == NULL){
				stworz(organizm, id, x1, y1 - 1, inicjatywy);
				nowy = true;
			}
			else if (z == 7 && y1 < 19 && organizm[x1][y1 + 1] == NULL){
				stworz(organizm, id, x1, y1 + 1, inicjatywy);
				nowy = true;
			}
			else if (licznik > 10000) {
				// nie ma miejsca na rozsiewanie
				nowy = true;
			}
		}
	}
	return false;
}