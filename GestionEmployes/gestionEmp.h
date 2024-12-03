#pragma once

#include <iostream>
#include <string>

using namespace std;

// Structure pour une date
struct Date {
    int jour;
    int mois;
    int annee;
};

// Structure pour un employé
struct Employe {
    string nom;
    string prenom;
    Date dateEmbauche;
    Date datePrisePoste;
};

// Fonction de saisie de Date
void saisirDate(Date& date) {
    cout << "Jour : ";
    cin >> date.jour;
    cout << "Mois : ";
    cin >> date.mois;
    cout << "Annee : ";
    cin >> date.annee;
}

// Fonction de saisie d'employé
void saisirEmploye(Employe& employe) {
    cout << "Nom : ";
    cin >> employe.nom;
    cout << "Prenom : ";
    cin >> employe.prenom;

    cout << "Date d'embauche :\n";
    saisirDate(employe.dateEmbauche);

    cout << "Date de prise de poste :\n";
    saisirDate(employe.datePrisePoste);
}

void afficherDate(const Date& date) {
    cout << date.jour << "/" << date.mois << "/" << date.annee;
}

void afficherEmploye(const Employe& employe) {
    cout << "Employe : " << employe.prenom << " " << employe.nom << "\n";
    cout << "Date d'embauche : ";
    afficherDate(employe.dateEmbauche);
    cout << "\nDate de prise de poste : ";
    afficherDate(employe.datePrisePoste);
    cout << "\n";
}