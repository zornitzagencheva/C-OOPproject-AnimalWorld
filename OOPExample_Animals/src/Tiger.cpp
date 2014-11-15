/*
 * Tiger.cpp
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */
#include <iostream>
#include "Tiger.h"
using namespace std;

Tiger::Tiger(string typeOfFood, int age, LivingPlace livingPlace) : Animal(typeOfFood, age, livingPlace)
{
}

Tiger::~Tiger() {
}

void Tiger::PrintInfo()
{
	cout << "I am tiger and I say scary grrrrrrrr!" << this->age << endl;
}

void Tiger::Move()
{
	cout << "I am tiger and I am run fast to catch a my food!" << endl;
}
