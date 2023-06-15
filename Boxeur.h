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
		Boxeur();
		string GetNom() { return nom;}
		double GetPoids() { return poids; }
		void SetPoids(double& poid) { this->poids = poid; }
	};
}



