#pragma once
#include <string>
#include "Boxeur.h"
using namespace std;

namespace Combat {
	class Combats
	{
	    private: 
		    string niveau;
            Boxeur* coinBleu;
            Boxeur* coinRouge;

        public: 
            // Constructeur
            Combats(string niveau);

            // Destructeur
            ~Combats();

            // Méthode pour obtenir le niveau du combat
            string GetNiveau() { return niveau; }

            // Méthode pour le setter et le getter de Coinbleu 
            Boxeur* getCoinBleu() { return coinBleu; }

            void setCoinBleu(Boxeur* nouveauCoinBleu) { coinBleu = nouveauCoinBleu; }

            // Méthode pour le setter et le getter de CoinRouge 
            Boxeur* getCoinRouge() { return coinRouge; }

            void setCoinRouge(Boxeur* nouveauCoinRouge) { coinBleu = nouveauCoinRouge; }
    };
}

