/*
 * Fish.h
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#ifndef FISH_H_
#define FISH_H_

#include "Animal.h"

class Fish: public Animal
{
public:
	Fish(string typeOfFood, int age, LivingPlace livingPlace);
	virtual ~Fish();
	void MakeSound();
	void Move();
};

#endif /* FISH_H_ */
