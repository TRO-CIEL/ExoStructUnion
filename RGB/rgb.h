#pragma once

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

enum COULEURS {
	black,          //  0
	dark_blue,      //  1
	dark_green,     //  2
	dark_cyan,      //  3
	dark_red,       //  4
	dark_magenta,   //  5
	dark_yellow,    //  6
	light_gray,     //  7
	dark_gray,      //  8
	light_blue,     //  9
	light_green,    // 10
	light_cyan,     // 11
	light_red,      // 12
	light_magenta,  // 13
	light_yellow,   // 14
	white           // 15
};

void nettoyage()
{
	DWORD n;
	DWORD size;
	COORD coord = { 0 };
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(h, &csbi);
	size = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacter(h, TEXT(' '), size, coord, &n);
	GetConsoleScreenBufferInfo(h, &csbi);
	FillConsoleOutputAttribute(h, csbi.wAttributes, size, coord, &n);
	SetConsoleCursorPosition(h, coord);
}

using namespace std;

void nettoyage();

#define on ,

void couleurs(int texte_couleur = 7 on int fond_couleur = 0)
{
	int couleur_total = (texte_couleur + (fond_couleur * 16));
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), couleur_total);
}

struct Srgb
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};
union UColor
{
	unsigned int val;
	Srgb components;
	unsigned char tabCol[3];
};

void definirCustomCouleur(unsigned int val) {
	UColor couleur;
	couleur.val = val;

	int consoleColor = 0;
	if (couleur.components.r > 128) consoleColor |= FOREGROUND_RED;
	if (couleur.components.g > 128) consoleColor |= FOREGROUND_GREEN;
	if (couleur.components.b > 128) consoleColor |= FOREGROUND_BLUE;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), consoleColor);

	cout << "\033[38;2;"
		<< static_cast<int>(couleur.components.r) << ";"
		<< static_cast<int>(couleur.components.g) << ";"
		<< static_cast<int>(couleur.components.b) << "m";
}