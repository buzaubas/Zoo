#include "Pet.h"

Pet::Pet()
{
}

Pet::Pet(const char* n, size_t l, bool t)
{
	name = n;
	legs = l;
	tale = t;
}

std::string Pet::getName()
{
	return this->name;
}

size_t Pet::getLegs()
{
	return this->legs;
}

bool Pet::getTale()
{
	return this->tale;
}
