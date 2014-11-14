/*
 * Tiger.cpp
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#include "Tiger.h"
#include <iostream>

Tiger::Tiger(string typeOfFood, int age, LivingPlace livingPlace) : Animal(typeOfFood, age, livingPlace)
{
}

Tiger::~Tiger() {
}

void Tiger::MakeSound()
{
	cout << "I am tiger and I say scary grrrrrrrr!" << endl;
}

void Tiger::Move()
{
	cout << "I am tiger and I am run fast to catch a my food!" << endl;
}
