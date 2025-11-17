#include "Vehicule.h"

class Moto : public Vehicule {
	bool sideCar;
public:
	Moto(const std::string& marque, int annee, int nbPortes) : Vehicule(marque, annee, kilometrage), sideCar(nbPortes) {}
	void afficher() const {
		std::cout << "Moto -> ";
		Vehicule::afficher();
		std::cout << "Nombre de portes: " << sideCar << std::endl;
	}
};