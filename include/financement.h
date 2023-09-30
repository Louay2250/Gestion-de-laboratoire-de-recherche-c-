#ifndef FINANCEMENT_H
#define FINANCEMENT_H
#include"projet.h"
#include <string>
#include<bits/stdc++.h>


class financement
{
    private:
        long idf;
        long montant;
        struct date dt_attribution;
    public:
        financement();
        financement(long,long,date );
        //methodes
        void rapportprojet(int,long,date);
        friend std::ostream& operator<<(std::ostream& out, const financement& f);
        friend std::istream& operator>>(std::istream& in, financement& f);
        //getters et setters
        long getidf()
        {
            return idf;
        }
        void setidf(long idf)
        {
            this->idf=idf;
        }
        long getMontant()
        {
            return montant;
        }
        void setmontant(long montant)
        {
            this->montant=montant;
        }
        date getdtAttribution()
        {
            return dt_attribution;
        }
        void setdtAttribution(date dt_attribution)
        {
            this->dt_attribution=dt_attribution;
        }


};

#endif // FINANCEMENT_H
