#define TRACE
#include "Boxeur.h"
#include <iostream>

Combat::Boxeur::Boxeur(string& nom, double poids)
{
#ifdef TRACE
	std::cout << "Boxeur (" << this->nom << ") de " << this << std::endl;
#endif
}

Combat::Boxeur::~Boxeur()
{
#ifdef TRACE
	std::cout << "Destruction de (" << this->nom << ") a " << this << std::endl;
#endif
}
