#pragma once
#include <string>
using namespace std;

namespace Combat
{
	class Boxeur
	{
	protected:
	private:
		string nom;
		double poids;
	public:

		string GetNom() { return nom;}
		double GetPoids() { return poids; }
		void SetPoids(double nouveauPoids) { this->poids = nouveauPoids; }

		// Mon constructeur
		Boxeur(string nom, double poids);

		// Mon destructeur
		~Boxeur();
	};
}



