// Nom du projet : Transgerbeur
// Nom de l’auteur : Trompier Téo
// Date de création : 26/11/2024

#include "gestionEmp.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Employe employe;

    cout << "Saisir les informations de l'employe :\n";
    saisirEmploye(employe);

    cout << "\nInformations de l'employe :\n";
    afficherEmploye(employe);

    return 0;
}