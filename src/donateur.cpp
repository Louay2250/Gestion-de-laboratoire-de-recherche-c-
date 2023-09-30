#include "donateur.h"
#include <iostream>
#include<bits/stdc++.h>
donateur::donateur()
{
    nom="";
    adresse="";
    email="";
    montant=0;
}
donateur::donateur(std::string nom,std::string adresse,std::string email,long montant)
{
    this->nom=nom;
    this->adresse=adresse;
    this->email=email;
    this->montant=montant;
}
void donateur::ajouterfinancement(financement f)
{
    financement *r = new financement(f);
    v.push_back(r);
}

void donateur::afficherfinancement()
{
    for(int i=0; i<int(v.size()); i++)
    {
        std::cout<<v[i]->getidf()<<std::endl;
    }
}

void donateur::supprimerfinancement(int idf)
{
    int i=0;
    while(idf!=v[i]->getidf())
    {
        i++;
    }
    v.erase(v.begin()+i);
}
std::ostream& operator<<(std::ostream& out, const donateur& d)
{
    out<<d.nom<<std::endl;
    out<<d.email<<std::endl;
    out<<d.adresse<<std::endl;
    out<<d.montant<<std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, donateur& d)
{

    std::cout<<std::endl<<"nom: ";
    in>>d.nom;
    std::cout<<"adresse: ";
    in>>d.adresse;
    std::cout<<"email: ";
    in>>d.email;
    std::cout<<"montant: ";
    in>>d.montant;

    return in;
}
