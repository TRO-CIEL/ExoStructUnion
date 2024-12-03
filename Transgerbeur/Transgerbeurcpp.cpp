#include "Transgerbeur.h"
#include <iostream>

using namespace std;

int main() {
	char dest[20] = "abcdefg";
	int taille = strcpy_s(dest, sizeof(dest), pa1.reference);

	pa1.poids = 5;
	ETAT etatC1 = vide;

	c1.pal = pa1;
	c1.e = etatC1;
	c1.x = 2;
	c1.y = 3;

	pa1.poids = 3;
	c2.pal = pa1;
	c2.e = rouleau;

	CASIER tabCasier[2] = { c1, c2 };

	cout << "rouleau : " << sizeof(rouleau) << " pa1 : " << sizeof(pa1) << " etatC1 : " << sizeof(etatC1) << " c1 : " << sizeof(c1) << " tabCasier : " << sizeof(tabCasier);
	return 0;
}