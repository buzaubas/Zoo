#pragma once
#include "Pet.h"

class Parrot : public Pet
{
private:
	int type;
	std::string getType();
public:
	enum { Cockatoos, Macaws, Parrotlet };
	Parrot();
	Parrot(int type, const char* n, size_t l, bool t);
	void Sound() override;
	void Show() override;
	void Type() override;
};

