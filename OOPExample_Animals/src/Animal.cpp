/*
 * Animal.cpp
 *
 *  Created on: 14.11.2014 �.
 *      Author: Breeze
 */

#include "Animal.h"
using namespace std;

Animal::~Animal() {
}

Animal::Animal(string typeOfFood, int age, LivingPlace livingPlace)
{
	this->typeOfFood = typeOfFood;
	this->age = age;
	this->livingPlace = livingPlace;
}
