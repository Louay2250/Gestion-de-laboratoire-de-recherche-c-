#include "Personne.h"
#include <iostream>

Personne::Personne()
{
    nom = "";
    prenom = "";
    dt_nais.setDays(1);
    dt_nais.setMonths(1);
    dt_nais.setYears(1);
    email = "";
    num_tel = 0;
}

Personne::Personne(string nom, string prenom, date dt_nais, string email, long num_tel)
{
    this->nom = nom;
    this->prenom = prenom;
    this->dt_nais = dt_nais;
    this->email = email;
    this->num_tel = num_tel;
}

Personne::~Personne()
{
    for(int i=0; i<int(projets.size()); i++)
    {
        delete projets[i];
    }
}

Personne::Personne(const Personne& p)
{
    nom = p.nom;
    prenom = p.prenom;
    email = p.email;
    num_tel = p.num_tel;
    dt_nais = p.dt_nais;
}

ostream& operator<<(ostream& out, const Personne& p)
{
    out<<p.prenom<<endl;
    out<<p.nom<<endl;
    out<<p.dt_nais.days<<"/"<<p.dt_nais.months<<"/"<<p.dt_nais.years<<endl;
    out<<p.email<<endl;
    out<<p.num_tel<<endl;
    return out;
}

istream& operator>>(istream& in, Personne& p)
{
    int jour, mois, annee;

    cout<<endl<<"nom: ";
    in>>p.nom;
    cout<<"prenom: ";
    in>>p.prenom;
    cout<<"date naissance:"<<endl<<"jour: ";
    in>>jour;
    cout<<"mois: ";
    in>>mois;
    cout<<"annee: ";
    in>>annee;
    date dt(jour, mois, annee);
    p.setDtNais(dt);
    cout<<"email: ";
    in>>p.email;
    cout<<"num. tel.: ";
    in>>p.num_tel;

    return in;
}

void Personne::ajouterProjet(Projet p)
{
    Projet *pp = new Projet(p);
    projets.push_back(pp);
}

void Personne::afficherProjets()
{
    for(int i=0; i<int(projets.size()); i++)
    {
        cout<<projets[i]->getNum()<<endl;
        cout<<projets[i]->getDescription()<<endl;
    }
}

void Personne::supprimerProjet(int num)
{
    int i=0;
    while(num!=projets[i]->getNum())
    {
        i++;
    }
    projets.erase(projets.begin()+i);
}
