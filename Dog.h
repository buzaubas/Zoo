#pragma once
#include "Pet.h"


class Dog : public Pet
{	
private:
	int type;
	std::string getType();
public:
	enum{ Bulldog, Shepherd, Retriever };
	Dog();
	Dog(int type, const char* n, size_t l, bool t);
	void Sound() override;
	void Show() override;
	void Type() override;
};

