#include "Combat.h"
#define TRACE
#include <iostream>

Combat::Combats::Combats(string niveau)
{
	this->niveau = niveau;

#ifdef TRACE
	std::cout << "Le combat est de niveau " << this->niveau << this << std::endl;
#endif
}

Combat::Combats::~Combats()
{
#ifdef TRACE
	std::cout << "Destruction du niveau " << this->niveau << this << std::endl;
#endif
}

Combat::Boxeur*::Combat::Combats::DesignerVainqueur(string couleurCoin)
{
    if (couleurCoin == "rouge") {
        vainqueur = coinRouge;
    }
    else if (couleurCoin == "bleu") {
        vainqueur = coinBleu;
    }
    else {
        vainqueur = nullptr;
    }
    return vainqueur;
}

Combat::Boxeur*::Combat::Combats::GetVainqueur()
{
    return vainqueur;
}

void Combat::Combats::AfficheResultats(Combats combats[])
{
    // Je n'ai pas fini par manque de temps :(
    for (int i = 0; i < 3; i++) {
        cout << "Combat " << i + 1 << endl;
        cout << "Niveau : " << combats[i].GetNiveau() << endl;
        cout << "Coin bleu : " << combats[i].getCoinBleu()->GetNom() << endl;
        cout << "Coin rouge : " << combats[i].getCoinRouge()->GetNom() << endl;
        cout << "Vainqueur : " << combats[i].GetVainqueur()->GetNom() << endl;
        cout << endl;
    }
}
