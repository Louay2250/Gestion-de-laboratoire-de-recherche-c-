#include<bits/stdc++.h>
#include"projet.h"
#include"donateur.h"
#include"financement.h"
#include"Stagiare.h"
#include<date.h>
#include<Template.h>

using namespace std;

int main()
{
    date dt(1,1,1);
    Projet p;
    Template<donateur> ld;

    //Création d'un donateur
    donateur d("Chahine Elati", "25 rue de la Paix", "Chahine@gmail.com", 50000);

    //Affichage des informations du donateur
    cout << "Nom du donateur : " << d.getNom() << endl;
    cout << "Adresse : " << d.getAdresse() << endl;
    cout << "Email : " << d.getemail() << endl;
    cout << "Montant : " << d.getmontant() << endl;

    //Ajout d'un financement
    financement f(1, 500, dt);

    //Ajout du financement à la liste des financements du donateur
    d.ajouterfinancement(f);

    //Affichage des financements du donateur
    d.afficherfinancement();

    //Création d'un stagiare
    Stagiare s("DHKAR", "LOUAY", dt, "Louay@gmail.com", 56948166, "Rapport de stage: validé", dt, dt);

    //Affichage des informations du stagiare
    cout << "Nom du stagiare : " << s.getNom() << endl;
    cout << "Prénom : " << s.getPrenom() << endl;
    //cout << "Date de naissance : " << s.getDtNais() << endl;
    cout << "Email : " << s.getEmail() << endl;
    cout << "Numéro de téléphone : " << s.getNumTel() << endl;
    Stagiare s1("DHIFALAH", "FAKHRI", dt, "FAKHRI@gmail.com", 56948166, "Rapport de stage: validé", dt, dt);

    //Affichage des informations du stagiare
    cout << "Nom du stagiare : " << s1.getNom() << endl;
    cout << "Prénom : " << s1.getPrenom() << endl;
    //cout << "Date de naissance : " << s1.getDtNais() << endl;
    cout << "Email : " << s1.getEmail() << endl;
    cout << "Numéro de téléphone : " << s1.getNumTel() << endl;
    s.effectuerdemande(p, dt, dt, "accepte");
    //cout << "Date de début de stage : " << s.getDtDeDebut() << endl;
    //cout << "Date de fin de stage : " << s.getDtDeFin() << endl;
    cout<<endl;
    f.rapportprojet(p.getNum(), p.getBudget(), p.getDtDebut());
    ld.ajouterObjet(d);
    ld.afficher();


    return 0;
}
