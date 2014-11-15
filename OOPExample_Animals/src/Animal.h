/*
 * Animal.h
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>

enum LivingPlace
{
	Mountains,
	Oceans,
	Plains,
	Woods,
	Savanes,
	Deserts,
	Rivers
};

class Animal
{
public:
	virtual ~Animal();
	Animal(std::string typeOfFood, int age, LivingPlace livingPlace);
	virtual void PrintInfo() = 0;
	virtual void Move() = 0;

protected:
	std::string typeOfFood;
	int age;
	LivingPlace livingPlace;
};

#endif /* ANIMAL_H_ */
