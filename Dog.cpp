#include "Dog.h"

std::string Dog::getType()
{
	switch (type)
	{
	case Bulldog: return "Bulldog";
	case Shepherd: return "Shepherd";
	case Retriever: return "Retriever";
	}
	return std::string();
}

Dog::Dog()
{
}

Dog::Dog(int tp, const char* n, size_t l, bool t) : Pet(n, l, t)
{
	type = tp;
}

void Dog::Sound()
{
	std::cout << "Gav-Gav" << std::endl;
}

void Dog::Show()
{
	std::cout << getName() << std::endl;
}

void Dog::Type()
{
	std::cout << getType() << std::endl;
}
