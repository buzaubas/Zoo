#include "Hamster.h"

std::string Hamster::getType()
{
	switch (type)
	{
	case Syrians: return "Syrians";
	case Chinese: return "Chinese";
	case Russians: return "Russians";
	}
	return std::string();
}

Hamster::Hamster()
{
}

Hamster::Hamster(int tp, const char* n, size_t l, bool t) : Pet(n, l, t)
{
	type = tp;
}
 
void Hamster::Sound()
{
	std::cout << "Pii-Pii" << std::endl;
}

void Hamster::Show()
{
	std::cout << getName() << std::endl;
}

void Hamster::Type()
{
	std::cout << getType() << std::endl;
}
