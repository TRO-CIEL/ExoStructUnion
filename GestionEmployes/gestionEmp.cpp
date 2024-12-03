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