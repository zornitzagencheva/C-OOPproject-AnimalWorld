/*
 * Tiger.h
 *
 *  Created on: 14.11.2014 ã.
 *      Author: Breeze
 */

#ifndef TIGER_H_
#define TIGER_H_
#include <iostream>
#include "Animal.h"

class Tiger: public Animal {
public:
	Tiger(std::string typeOfFood, int age, LivingPlace livingPlace);
	virtual ~Tiger();
	void PrintInfo();
	void Move();
};

#endif /* TIGER_H_ */
