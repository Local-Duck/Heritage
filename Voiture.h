#include "Vehicule.h"

class Voiture : public Vehicule {
	int nbPortes;
public:
	Voiture(const std::string& marque, int annee, int nbPortes) : Vehicule(marque, annee, kilometrage), nbPortes(nbPortes) {}
	void afficher() const {
		std::cout << "Voiture -> ";
		Vehicule::afficher();
		std::cout << "Nombre de portes: " << nbPortes << std::endl;
	}
};