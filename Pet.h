#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pet
{
	std::string name;
	size_t legs;
	bool tale;
public:
	Pet();
	Pet(const char* n, size_t l, bool t);
	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;
	std::string getName();
	size_t getLegs();
	bool getTale();
};


