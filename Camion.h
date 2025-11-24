#include "Vehicule.h"

class Camion : public Vehicule {
	double capacite;
public:
	Camion(const std::string& marque, int annee,double capacite) : Vehicule(marque, annee, kilometrage), capacite(capacite) {}
	void afficher() const {
		std::cout << "Camion -> ";
		Vehicule::afficher();
		std::cout << "Nombre de portes: " << capacite << std::endl;
	}
};