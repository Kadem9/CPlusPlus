#pragma once
#include <string>
#include "Boxeur.h"
using namespace std;

namespace Combat {
	class Combats
	{
	    private: 
		    string niveau;
            Boxeur* coinBleu = nullptr;

        public: 
            // Constructeur
            Combats(string niveau);

            // Destructeur
            ~Combats();

            // M�thode pour obtenir le niveau du combat
            string GetNiveau() { return niveau; }

            // M�thode pour le setter et le getter de Coinbleu 
            Combats* GetCoinBleu() { return Boxeur * coinBleu; };

            Combats* SetCoinBleu(Boxeur* coinBleu)
    };
}

