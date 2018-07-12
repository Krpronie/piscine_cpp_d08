#ifndef FRUITBOX_H_
#define FRUITBOX_H_

#include "FruitNode.h"

class FruitBox 
{
public:
	FruitBox(unsigned int capacity);
	FruitBox(const FruitBox &other) = delete;
	~FruitBox();

	FruitBox &operator=(const FruitBox &other) = delete;

	int nbFruits() const;
	bool putFruit(Fruit *f);
	Fruit *pickFruit();
	FruitNode *head() const;

private:
	unsigned int _count;
	const unsigned int _capacity;
	FruitNode *_head;
};

#endif