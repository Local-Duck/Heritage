#pragma once
#include <string>
#include <iostream>

class Vehicule
{
protected:
    std::string marque;
    int annee;
    float kilometrage;
public:
    Vehicule(const std::string& brand, int year, float km) : marque(brand), annee(year), kilometrage(km) {}
    virtual void afficher() const {
        std::cout << "Marque: " << marque << ", Année: " << annee << std::endl;
    }
    ~Vehicule() {} // Destructeur 
};

