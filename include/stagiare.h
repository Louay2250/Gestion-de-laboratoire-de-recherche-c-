#ifndef STAGIARE_H
#define STAGIARE_H
#include<bits/stdc++.h>
#include <personne.h>
#include<projet.h>
#include<date.h>

class Stagiare : public Personne
{
    private :
         string resultat;
         struct date dt_debut;
         struct date dt_fin;

    public:
        // constructeur et destructeur
        Stagiare();
        Stagiare(std::string nom,std::string prenom,date date_naiss,std::string email,long num_tel,std::string,date, date);
        //methodes
        void effectuerdemande(Projet a,date dt_debut,date dt_fin,string resultat);
        friend std::ostream& operator<<(std::ostream& out, const Stagiare& s);
        friend std::istream& operator>>(std::istream& in, Stagiare& s);
        void afficher();

        // getters et setters
        std::string getResulat()
        {
            return resultat;
        }
        void setResultat(string resultat)
        {
            this->resultat=resultat;
        }

        date getDtDeDebut()
        {
            return dt_debut;
        }
        void setDtDeDebut(date dt_debut)
        {
            this->dt_debut = dt_debut;
        }
        date getDtDeFin()
        {
            return dt_fin;
        }
        void setDtFin(date dt_fin)
        {
            this->dt_fin = dt_fin;
        }

};

#endif // STAGIARE_H
