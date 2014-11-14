/*
 * Fish.cpp
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#include "Fish.h"
#include "Animal.h"
#include <iostream>
using namespace std;

Fish::Fish(string typeOfFood, int age, LivingPlace livingPlace) : Animal(typeOfFood, age, livingPlace)
{
}

Fish::~Fish() {}

void Fish::MakeSound()
{
	cout << "I am fish and I say nothing!" << endl;
}

void Fish::Move()
{
	cout << "I am fish and I am swimming animal!" << endl;
}

