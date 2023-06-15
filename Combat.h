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
            Boxeur* vainqueur;

        public: 
            // Constructeur
            Combats(string niveau);

            // Destructeur
            ~Combats();

            // Méthode pour obtenir le niveau du combat
            string GetNiveau() { return niveau; }

            // Méthode pour le setter et le getter de Coinbleu 
            Boxeur* getCoinBleu() { return coinBleu; }

            void setCoinBleu(Boxeur* nouveauCoinBleu) { 
                coinBleu = nouveauCoinBleu;

                if (nouveauCoinBleu != coinRouge) {
                    coinBleu = nouveauCoinBleu;
                }
                else {
                    cout << "Ce boxeur est déjà dans le coin rouge !" << endl;
                }
            }

            // Méthode pour le setter et le getter de CoinRouge 
            Boxeur* getCoinRouge() { return coinRouge; }

            void setCoinRouge(Boxeur* nouveauCoinRouge) { 
               coinRouge = nouveauCoinRouge;

                if (nouveauCoinRouge != coinBleu) {
                    coinRouge = nouveauCoinRouge;
                }
                else {
                    cout << "Ce boxeur combat déjà dans l'autre camp" << endl;
                }
            }

            // Méthode pour designer le vainqueur
            Boxeur* DesignerVainqueur(string couleurCoin);
    };
}
