/*
 * Fish.h
 *
 *  Created on: 14.11.2014 �.
 *      Author: Breeze
 */

#ifndef FISH_H_
#define FISH_H_

#include "Animal.h"

class Fish: public Animal
{
public:
	Fish(std::string typeOfFood, int age, LivingPlace livingPlace);
	virtual ~Fish();
	void PrintInfo();
	void Move();
};

#endif /* FISH_H_ */
