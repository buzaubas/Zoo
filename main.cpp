#include <iostream>
#include <list>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"

using namespace std;

int main()
{
    Pet* first;
    first = new Dog(Dog::Bulldog, "Bobik", 4, true);
    first->Sound();

    cout << "\n" << "\n";

    list<Pet*> zoo;
    zoo.push_back(new Dog(Dog::Bulldog, "Bobik", 4, true));
    zoo.push_back(new Cat(Cat::Ragdoll, "Dymka", 4, false));
    zoo.push_back(new Parrot(Parrot::Parrotlet, "Bayan", 2, true));
    zoo.push_back(new Hamster(Hamster::Chinese, "Goldan-Zeren", 3, true));

    for (list<Pet*>::iterator iter = zoo.begin(); iter != zoo.end(); iter++)
        (*iter)->Show();
}
