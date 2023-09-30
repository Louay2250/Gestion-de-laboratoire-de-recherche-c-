#include "donateur.h"
#include <iostream>
#include<bits/stdc++.h>
financement::financement()
{
    idf=0;
    montant=0;

}
financement::financement(long idf,long montant,date dt_attribution)
{
    this->montant=montant;
    this->idf=idf;
    this->dt_attribution=dt_attribution;
}
 void financement::rapportprojet(int num,long montant, date dt_attribution)
{
    std::cout<<"num de projet "<<num<<" montant specifié"<<montant<<" date d'attribution de projet est "<<dt_attribution.days<<"/"<<dt_attribution.months<<"/"<<dt_attribution.years<<std::endl;

}
std::ostream& operator<<(std::ostream& out, const financement& f)
{
    out<<f.montant<<std::endl;
    out<<f.dt_attribution.days<<"/"<<f.dt_attribution.months<<"/"<<f.dt_attribution.years<<std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, financement& f)
{
    int jour, mois, annee;
    std::cout<<std::endl<<"idf:";
    in>>f.idf;
    std::cout<<std::endl<<"montant: ";
    in>>f.montant;
    std::cout<<"date naissance:"<<std::endl<<"jour: ";
    in>>jour;
    std::cout<<"mois: ";
    in>>mois;
    std::cout<<"annee: ";
    in>>annee;
    f.dt_attribution.days = jour;
    f.dt_attribution.months = mois;
    f.dt_attribution.years = annee;
    return in;
}
