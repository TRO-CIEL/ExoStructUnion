#pragma once

enum ETAT { vide = 0, palette = 1, rouleau = 2 };

union CONTENU {
	int palette, rouleau;
};

struct PALETTE {
	int poids = 0;
	char reference[19];
} pa1, pa2;

struct ROULEAU {
	float longueur = 0;
	int numero = 0;
} ro1;

struct CASIER {
	PALETTE pal;
	int x = 0, y = 0;
	ETAT e;
} c1, c2;