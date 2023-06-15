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

            // M�thode pour obtenir le niveau du combat
            string GetNiveau() { return niveau; }

            // M�thode pour le setter et le getter de Coinbleu 
            Boxeur* getCoinBleu() { return coinBleu; }

            void setCoinBleu(Boxeur* nouveauCoinBleu) { 
                coinBleu = nouveauCoinBleu;

                if (nouveauCoinBleu != coinRouge) {
                    coinBleu = nouveauCoinBleu;
                }
                else {
                    cout << "Ce boxeur est d�j� dans le coin rouge !" << endl;
                }
            }

            // M�thode pour le setter et le getter de CoinRouge 
            Boxeur* getCoinRouge() { return coinRouge; }

            void setCoinRouge(Boxeur* nouveauCoinRouge) { 
               coinRouge = nouveauCoinRouge;

                if (nouveauCoinRouge != coinBleu) {
                    coinRouge = nouveauCoinRouge;
                }
                else {
                    cout << "Ce boxeur combat d�j� dans l'autre camp" << endl;
                }
            }

            // M�thode pour designer le vainqueur
            Boxeur* DesignerVainqueur(string couleurCoin);
    };
}
