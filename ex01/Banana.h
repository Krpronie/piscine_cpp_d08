#ifndef BANANA_H_
#define BANANA_H_

#include <iostream>
#include <string>
#include "Fruit.h"

class Banana : public Fruit
{
	public:
		Banana();
		virtual ~Banana();
};

#endif