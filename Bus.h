#include "Vehicule.h"

class Bus : public Vehicule {
	int nbPlaces;
public:
	Bus(const std::string& marque, int annee, int nbPlaces) : Vehicule(marque, annee, kilometrage), nbPlaces(nbPlaces) {}
	void afficher() const {
		std::cout << "Bus -> ";
		Vehicule::afficher();
		std::cout << "Nombre de portes: " << nbPlaces << std::endl;
	}
};