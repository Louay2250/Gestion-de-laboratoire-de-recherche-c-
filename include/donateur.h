#ifndef DONATEUR_H
#define DONATEUR_H
#include"projet.h"
#include"financement.h"
#include <string>
#include <vector>
#include<bits/stdc++.h>

class donateur
{
     private:
        std::string nom;
        std::string adresse;
        std::string email;
        long montant;
        std::vector <financement*> v;
    public:
        donateur();
        donateur(std::string,std::string,std::string,long);
        //methodes
        void supprimerfinancement(int);
        void afficherfinancement();
        void ajouterfinancement(financement);

        friend std::ostream& operator<<(std::ostream& out, const donateur& d);
        friend std::istream& operator>>(std::istream& in, donateur& d);
        std::string getNom()
        {
            return nom;
        }
        void setNom(std::string nom)
        {
            this->nom = nom;
        }
          std::string getAdresse()
        {
            return adresse;
        }
        void setAdresse(std::string adresse)
        {
            this->adresse = adresse;
        }
          std::string getemail()
        {
            return email;
        }
        void setemail(std::string email)
        {
            this->email = email;
        }
        long getmontant()
        {
            return montant;
        }
        void setmontant(long montant)
        {
            this->montant=montant;
        }

};

#endif // DONATEUR_H
