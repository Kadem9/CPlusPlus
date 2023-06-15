
#include <iostream>
#include "Boxeur.h"

using namespace Combat;
using namespace std;

int main()
{
	cout << "---> DEBUT" << endl << endl;

	Boxeur boxeur_1("Box_1", 75);
	cout << "Le boxeur " << boxeur_1.GetNom() << " fait " << boxeur_1.GetPoids() << " kg" << endl;

	Boxeur* boxeur_2;
	boxeur_2 = new Boxeur("Box_2", 78);
	cout << "Le boxeur " << boxeur_2->GetNom() << " fait " << boxeur_2->GetPoids() << " kg" << endl;
}
