/*
 * Eagle.cpp
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#include "Eagle.h"
#include <iostream>
using namespace std;

Eagle::Eagle(string typeOfFood, int age, LivingPlace livingPlace) : Animal(typeOfFood, age, livingPlace)
{
}

Eagle::~Eagle() {
}

void Eagle::PrintInfo()
{
	cout << "I am eagle and I eat fresh flesh!" << this->age << endl;
}

Eagle::Eagle(const Eagle& other) : Animal(other.typeOfFood, 0, other.livingPlace)
{
}

void Eagle::Move()
{
	cout << "I am eagle and I am flying animal!" << endl;
}
