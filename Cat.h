#pragma once
#include "Pet.h"


class Cat : public Pet
{
private:
	int type;
	std::string getType();
public:
	enum { Shorthair, Ragdoll, British };
	Cat();
	Cat(int type, const char* n, size_t l, bool t);
	void Sound() override;
	void Show() override;
	void Type() override;
};


