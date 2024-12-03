#include "rgb.h"
#include <iostream>

int main() {
	couleurs(15, 0);
	bool etape1 = false, etape2 = false, etape3 = false;
	int r, g, b;

	UColor couleur;

	cout << "Entrer la valeur du ";
	couleurs(12, 0);
	cout << "rouge ";
	couleurs(15, 0);
	cout << "en hexa : ";
	while (!etape1) {
		cin >> hex >> r;
		couleur.components.r = r;
		cin.clear();
		cin.ignore(1000, '\n');
		if (r <= 16777215 && r >= 0) {
			etape1 = true;
			while (!etape2) {
				cout << "Entrer la valeur du ";
				couleurs(10, 0);
				cout << "vert ";
				couleurs(15, 0);
				cout << "en hexa : ";
				cin >> hex >> g;
				couleur.components.g = g;
				cin.clear();
				cin.ignore(1000, '\n');
				if (g <= 16777215 && g >= 0) {
					etape2 = true;
					while (!etape3) {
						cout << "Entrer la valeur du ";
						couleurs(9, 0);
						cout << "bleu ";
						couleurs(15, 0);
						cout << "en hexa : ";
						cin >> hex >> b;
						couleur.components.b = b;
						cin.clear();
						cin.ignore(1000, '\n');
						if (b <= 16777215 && b >= 0) {
							etape3 = true;
							definirCustomCouleur(couleur.val);
							cout << "rgb(" << static_cast<int>(couleur.components.r) << ", " << static_cast<int>(couleur.components.g) << ", " << static_cast<int>(couleur.components.b) << ")" << endl;
							couleurs(15, 0);
						}
						else {
							couleurs(12, 0);
							cout << "Entrer une valeur valide pour le vert !\n";
							couleurs(15, 0);
						}
					}
				}
				else {
					couleurs(12, 0);
					cout << "Entrer une valeur valide pour le vert !\n";
					couleurs(15, 0);
				}
			}
		}
		else {
			couleurs(12, 0);
			cout << "Entrer une valeur valide pour le rouge !\n";
			couleurs(15, 0);
		}
	}
	return 0;
}