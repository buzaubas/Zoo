#include "Cat.h"

std::string Cat::getType()
{
	switch (type)
	{
	case Shorthair: return "Shorthair";
	case Ragdoll: return "Ragdoll";
	case British: return "British";
	}
	return std::string();
}

Cat::Cat()
{
}

Cat::Cat(int tp, const char* n, size_t l, bool t) : Pet(n, l, t)
{
	type = tp;
}

void Cat::Sound()
{
	std::cout << "Myaw-Myaw" << std::endl;
}

void Cat::Show()
{
	std::cout << getName() << std::endl;
}

void Cat::Type()
{
	std::cout << getType() << std::endl;
}
