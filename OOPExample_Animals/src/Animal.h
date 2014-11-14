/*
 * Animal.h
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */
#include "string"
#ifndef ANIMAL_H_
#define ANIMAL_H_

using namespace std;

enum LivingPlace
{
	Mountains,
	Oceans,
	Plains,
	Woods,
	Savanes,
	Deserts,
	Revers
};

class Animal
{
public:
	virtual ~Animal();
	Animal(string typeOfFood, int age, LivingPlace livingPlace);
	virtual void MakeSound() = 0;
	virtual void Move() = 0;
	string typeOfFood;
	int age;
	string livingPlace;
};

#endif /* ANIMAL_H_ */
