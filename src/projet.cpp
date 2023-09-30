#include "Projet.h"

// Constructeurs
Projet::Projet()
{
}

Projet::Projet(int num, std::string description, date dtdebut, date dtfin, double budget)
{

}

//Projet::Projet(const Projet& other)
//    : num(other.num), description(other.description), dtdebut(other.dtdebut), dtfin(other.dtfin), budget(other.budget), vecteurTache(other.vecteurTache) {}

Projet::~Projet() {}

// Getters
int Projet::getNum() const {
    return num;
}

std::string Projet::getDescription() const {
    return description;
}

date Projet::getDtDebut() const {
    return dtdebut;
}

date Projet::getDtFin() const {
    return dtfin;
}

double Projet::getBudget() const {
    return budget;
}

// Setters
void Projet::setDescription(std::string description) {
    this->description = description;
}

void Projet::setDtDebut(date dtdebut) {
    this->dtdebut = dtdebut;
}

void Projet::setDtFin(date dtfin) {
    this->dtfin = dtfin;
}

void Projet::setBudget(double budget) {
    this->budget = budget;
}
void Projet::saisir_Projet() {
    std::cout << "Numéro de projet : ";
    std::cin >> num;
    std::cout << "Description : ";
    std::cin.ignore();
    std::getline(std::cin, description);
    std::cout << "Date de début : ";
    std::cin >> dtdebut.days;
    std::cin >> dtdebut.months;
    std::cin >> dtdebut.years;
    std::cout << "Date de fin : ";
    std::cin >> dtfin.days;
    std::cin >> dtfin.months;
    std::cin >> dtfin.years;
    std::cout << "Budget : ";
    std::cin >> budget;
}

void Projet::afficher_Projet() {
    std::cout << "Projet n°" << num << " : " << description << std::endl;
    std::cout << "  Date de début : " << dtdebut.days<<"/"<<dtdebut.months<<"/"<<dtdebut.years<< std::endl;
    std::cout << "  Date de fin   : " << dtfin.days<<"/"<<dtfin.months<<"/"<<dtfin.years<< std::endl;
    std::cout << "  Budget        : " << budget << std::endl;
    std::cout << "  Tâches :" << std::endl;
//    for (const Tache& tache : vecteurTache) {
//        std::cout << "    " << tache << std::endl;
//    }
}

void Projet::modifier_projet(std::string description, date dtdebut, date dtfin, std::string, double budget) {
    this->description = description;
    this->dtdebut = dtdebut;
    this->dtfin = dtfin;
    this->budget = budget;
}

//void Projet::supprimer_tache(int numTache) {
//    for (auto it = vecteurTache.begin(); it != vecteurTache.end(); it++) {
//        if (it->getNum() == numTache) {
//            vecteurTache.erase(it);
//            break;
//        }
//    }
//}

//void Projet::ajouter_tache(const Tache &tache) {
//    vecteurTache.push_back(tache);
//}

void Projet::allouer_budget(double montant) {
    this->budget+=montant;
}
