#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include<ctime>
#include<iostream>
#include<vector>
#include<projet.h>
#include<date.h>

using namespace std;

class Personne
{
    protected:
        string nom;
        string prenom;
        string email;
        long num_tel;
        date dt_nais;
        vector<Projet*> projets;


    public:
        //constructeurs et destructeur
        Personne();
        Personne(string, string, date, string, long);
        ~Personne();
        Personne(const Personne &p);

        //methodes
        friend ostream& operator<<(ostream& out, const Personne& p);
        friend istream& operator>>(istream& in, Personne& p);
        void ajouterProjet(Projet p);
        void afficherProjets();
        void supprimerProjet(int num);
        virtual void afficher() = 0;

        //getters et setters
        string getNom()
        {
            return nom;
        }
        void setNom(string nom)
        {
            this->nom = nom;
        }

        string getPrenom()
        {
            return prenom;
        }
        void setPrenom(string prenom)
        {
            this->prenom = prenom;
        }

        date getDtNais()
        {
            return dt_nais;
        }
        void setDtNais(date dt_nais)
        {
            this->dt_nais = dt_nais;
        }

        string getEmail()
        {
            return email;
        }
        void setEmail(string email)
        {
            this->email = email;
        }

        long getNumTel()
        {
            return num_tel;
        }
        void setNumTel(long num_tel)
        {
            this->num_tel = num_tel;
        }
};

#endif // PERSONNE_H
