
#include <iostream>
#include "Boxeur.h"
#include "Combat.h"
#include <Windows.h>
#include <atltime.h>

using namespace Combat;
using namespace std;

int main()
{
	//  Permet l'affichage des accents
	SetConsoleOutputCP(CP_UTF8);

	cout << "---> DEBUT" << endl << endl;

	// j'instanc i mes différents combats
	Combats combats[3] = {
		Combats("Demi-finale 1"),
		Combats("Demi-finale 2"),
		Combats("Finale")
		};

	// Mon premier boxeur

	Boxeur boxeur_1("Mike Tyson", 79);
	cout << "Le boxeur " << boxeur_1.GetNom() << " fait " << boxeur_1.GetPoids() << " kg" << endl;

	//Boxeur* boxeur_test;
	//boxeur_test->SetPoids(51);
	//cout << "Le poid du gars fait " << boxeur_test->GetPoids() << endl;

	// Mon deuxième boxeur
	Boxeur* boxeur_2;
	boxeur_2 = new Boxeur("Floyd Mayweather", 78);
	cout << "Le boxeur " << boxeur_2->GetNom() << " fait " << boxeur_2->GetPoids() << " kg" << endl;

	// Mon troisième boxeur
	Boxeur* boxeur_3;
	boxeur_3 = new Boxeur("Mohammed Ali", 77);
	cout << "Le boxeur " << boxeur_3->GetNom() << " fait " << boxeur_3->GetPoids() << " kg" << endl;

	// Mon quatrième boxeur
	Boxeur* boxeur_4;
	boxeur_4 = new Boxeur("Kadem Garnier", 79);
	cout << "Le boxeur " << boxeur_4->GetNom() << " fait " << boxeur_4->GetPoids() << " kg" << endl;

	Combats combat_1("Comb_1_1_/8");
	cout << "Le combat est au niveau " << combat_1.GetNiveau() << endl;

	// Association entre combat_1 et boxeur_1
	combat_1.setCoinBleu(&boxeur_1);
	cout << "Le coin bleu sera occupé par ... " << combat_1.getCoinBleu()->GetNom() << endl;

	// Association entre combat_1 et boxeur_2
	combat_1.setCoinRouge(boxeur_2);
	cout << "Et le coin rouge, sera occupé par le célèbre ... " << combat_1.getCoinRouge()->GetNom() << endl;

	//combat_1.setCoinRouge(&boxeur_1); // Test pour voir si on peut mettre dans l'autre camp un autre boxeur
	cout << "Le grand gagnant de ce combat est " << combat_1.DesignerVainqueur("rouge")->GetNom() << endl << endl;

	// Je met mes boxeurs pour le premier match
	combats[0].setCoinBleu(&boxeur_1);
	combats[0].setCoinRouge(boxeur_2);

	// Je met mes boxeurs pour le deuxime match
	combats[1].setCoinBleu(boxeur_3);
	combats[1].setCoinRouge(boxeur_4);

	// je designe les vainqueurs pour ma finale
	Boxeur* vainqueur_demi1 = combats[0].DesignerVainqueur("rouge");
	Boxeur* vainqueur_demi2 = combats[1].DesignerVainqueur("bleu");

	// je met mes vainqueurs pour ma finale
	combats[2].setCoinBleu(vainqueur_demi1);
	combats[2].setCoinRouge(vainqueur_demi2);

	// je designe le vainqueur de la finale
	Boxeur* vainqueur_finale = combats[2].DesignerVainqueur("rouge");

	// Mon boxeur 1 est Mike Tyson
	// Memo : Mon boxeur 2 est Mayweather 

	  // jE donne les résultats de mes finales
	cout << "Vainqueur de la demi-finale 1 : " << vainqueur_demi1->GetNom() << endl;
	cout << "Vainqueur de la demi-finale 2 : " << vainqueur_demi2->GetNom() << endl;
	cout << "Vainqueur de la finale : " << vainqueur_finale->GetNom() << endl << endl;

	// Je n'ai pas terminé : Combats::AfficheResultats(combats);

	delete boxeur_2;
	delete boxeur_3;
	delete boxeur_4;

	cout << "---> FIN" << endl << endl;
}
