
#include <iostream>
#include "Boxeur.h"
#include "Combat.h"

using namespace Combat;
using namespace std;

int main()
{
	cout << "---> DEBUT" << endl << endl;

	Boxeur boxeur_1("Box_1", 75);
	cout << "Le boxeur " << boxeur_1.GetNom() << " fait " << boxeur_1.GetPoids() << " kg" << endl;

	//Boxeur* boxeur_test;
	//boxeur_test->SetPoids(51);
	//cout << "Le poid du gars fait " << boxeur_test->GetPoids() << endl;

	Boxeur* boxeur_2;
	boxeur_2 = new Boxeur("Box_2", 78);
	cout << "Le boxeur " << boxeur_2->GetNom() << " fait " << boxeur_2->GetPoids() << " kg" << endl;



	Combats combat_1("Comb_1_1_/8");
	cout << "Le combat est au niveau " << combat_1.GetNiveau() << endl;


	delete boxeur_2;
	cout << "---> FIN" << endl << endl;
}
