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
}
