/*
 * Eagle.cpp
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#include "Eagle.h"
#include <iostream>

Eagle::Eagle(string typeOfFood, int age, LivingPlace livingPlace) : Animal(typeOfFood, age, livingPlace)
{
}

Eagle::~Eagle() {
}

void Eagle::MakeSound()
{
	cout << "I am eagle and I eat fresh flesh!" << endl;
}

void Eagle::Move()
{
	cout << "I am eagle and I am flying animal!" << endl;
}
