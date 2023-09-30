#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <vector>
#include <string>
#include <algorithm>
#include "donateur.h"
#include "projet.h"
#include "financement.h"

template <class T>
class Template {
private:
    std::vector<T> v1;
public:
    Template() {}

    void ajouterObjet(T t) {
        v1.push_back(t);
    }

    void supprimerObjet(int i) {
        if (i < v1.size()) {
            v1.erase(v1.begin() + i);
        }
    }

    void afficher() {
        std::cout << "Donateurs:\n";
        for (int i=0; i<v1.size();i++) {
            std::cout << v1[i] << "\n";
        }
    }

    void trierDonateursParMontantTotal() {
        std::sort(v1.begin(), v1.end(),
            [](const T* a, const T* b) { return a->getmontant() < b->getmontant(); });
    }
};

#endif // TEMPLATE_H
