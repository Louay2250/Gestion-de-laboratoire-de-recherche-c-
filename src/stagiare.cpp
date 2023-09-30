#include "stagiare.h"
#include <iostream>
#include<bits/stdc++.h>
Stagiare::Stagiare()
{
    resultat="";
}
Stagiare::Stagiare(string nom,string prenom,date date_naiss,string email,long num_tel,string,date , date):Personne( nom, prenom, date_naiss, email, num_tel){
    this->resultat=resultat;
    this->dt_debut=dt_debut;
    this->dt_fin=dt_fin;
}
void Stagiare::effectuerdemande(Projet a,date dt_debut,date dt_fin,string resultat)
{
    cout<<endl<<"projet sur laquel vous voulez effectué un stage:";
    cout<<endl<<"date de debut:";
    cin>>dt_debut.days;
    cin>>dt_debut.months;
    cin>>dt_debut.years;
    cout<<endl<<"date de fin:";
    cin>>dt_fin.days;
    cin>>dt_fin.months;
    cin>>dt_fin.years;
    cout<<endl<<"resultat de stage:"<<resultat;

}
ostream& operator<<(ostream& out, const Stagiare& s)
{
    const Personne *p = &s;
    out<<*p;
    out<<s.resultat<<endl;
    out<<s.dt_debut.days<<"/"<<s.dt_debut.months<<"/"<<s.dt_debut.years<<endl;
    out<<s.dt_fin.days<<"/"<<s.dt_fin.months<<"/"<<s.dt_fin.years<<endl;
    return out;
}
istream& operator>>(istream& in, Stagiare& s)
{
    Personne *p=&s;
    in>>*p;
    int jour, mois, annee;

    cout<<endl<<"resultat: ";
    in>>s.resultat;
    cout<<"date debut:"<<endl<<"jour: ";
    in>>jour;
    cout<<"mois: ";
    in>>mois;
    cout<<"annee: ";
    in>>annee;
    s.dt_debut.days = jour;
    s.dt_debut.months = mois;
    s.dt_debut.years = annee;
    s.dt_fin.days = jour;
    s.dt_fin.months = mois;
    s.dt_fin.years = annee;

    return in;
}

void Stagiare::afficher()
{

}
