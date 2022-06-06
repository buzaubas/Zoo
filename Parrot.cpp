#include "Parrot.h"

std::string Parrot::getType()
{
	switch (type)
	{
	case Cockatoos: return "Cockatoos";
	case Macaws: return "Macaws";
	case Parrotlet: return "Parrotlet";
	}
	return std::string();
}

Parrot::Parrot()
{
}

Parrot::Parrot(int tp, const char* n, size_t l, bool t) : Pet(n, l, t)
{
	type = tp;
}

void Parrot::Sound()
{
	std::cout << "Chirik-Chirik" << std::endl;
}

void Parrot::Show()
{
	std::cout << getName() << std::endl;
}

void Parrot::Type()
{
	std::cout << getType() << std::endl;
}
