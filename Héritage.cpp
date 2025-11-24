#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"
#include "Camion.h"
#include "Bus.h"


using namespace std;
int main()
{
	Vehicule* parc[4];
	parc[0] = new Voiture("ggg",2025,4);
	parc[1] = new Moto("gg",2005,true);
	parc[2] = new Camion("gg",2007,534158458485);
	parc[3] = new Bus("gg", 2000, 500);

	for (int i = 0; i < 4; i++) {
		cout << parc[i] << endl;
	}

}

