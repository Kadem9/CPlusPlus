#pragma once
#include <string>
using namespace std;

namespace Combat {
	class Combats
	{
	    private: 
		    string niveau;

        public: 
            // Constructeur
            Combats(string niveau);

            // Destructeur
            ~Combats();

            // M�thode pour obtenir le niveau du combat
            string GetNiveau() { return niveau; }
    };
}

