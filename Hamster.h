#pragma once
#include "Pet.h"


class Hamster : public Pet
{
private:
	int type;
	std::string getType();
public:
	enum { Syrians, Chinese, Russians };
	Hamster();
	Hamster(int type, const char* n, size_t l, bool t);
	void Sound() override;
	void Show() override;
	void Type() override;
};


