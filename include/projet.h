#ifndef PROJET_H
#define PROJET_H


#include <iostream>
#include <string>
#include <vector>
#include<date.h>

class Projet {
public:
    // Constructeurs
    Projet();

    Projet(int num, std::string description, date dtdebut, date dtfin, double budget);

    ~Projet();


    int getNum() const;
    std::string getDescription() const;
    date getDtDebut() const;
    date getDtFin() const;
    double getBudget() const;


    void setDescription(std::string description);
    void setDtDebut(date dtdebut);
    void setDtFin(date dtfin);
    void setBudget(double budget);


   void saisir_Projet();
    void afficher_Projet();
    void modifier_projet(std::string , date , date, std::string ,double );
    void supprimer_tache(int);
    //void ajouter_tache(const Tache &);
    void allouer_budget(double);

    friend std::ostream& operator<<(std::ostream& os, const Projet& projet);
    friend std::istream& operator>>(std::istream& is, Projet& projet);


private:
    int num;
    std::string description;
    date dtdebut;
    date dtfin;
    double budget;
//    std::vector<Tache> vecteurTache;
};


#endif // PROJET_H
