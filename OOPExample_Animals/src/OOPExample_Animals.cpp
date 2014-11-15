//============================================================================
// Name        : OOPExample_Animals.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "Eagle.h"
#include "Tiger.h"
#include "Fish.h"

using namespace std;

int main()
{
	list<Animal*> animals;
	Eagle * eagle = new Eagle("rabits", 1, Mountains);
	Animal * eagleChicken = new Eagle(*eagle);
	Eagle newEagle = *eagle;

	animals.push_back(new Eagle("flesh", 3, Mountains));
	animals.push_back(new Fish("plankton", 1, Oceans));
	animals.push_back(new Tiger("gaselle", 4, Savanes));
	animals.push_back(eagle);
	animals.push_back(eagleChicken);
	animals.push_back(&newEagle);

	for(list<Animal*>::iterator it = animals.begin(); it != animals.end(); it++)
	{
		(*it)->PrintInfo();
	}

	return 0;
}
