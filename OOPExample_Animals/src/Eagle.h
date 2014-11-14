/*
 * Eagle.h
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#ifndef EAGLE_H_
#define EAGLE_H_

#include "Animal.h"

class Eagle: public Animal {
public:
	Eagle(string typeOfFood, int age, LivingPlace livingPlace);
	virtual ~Eagle();
	void MakeSound();
	void Move();
};

#endif /* EAGLE_H_ */
