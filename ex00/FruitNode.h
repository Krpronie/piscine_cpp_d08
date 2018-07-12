#ifndef FRUITNODE_H_
#define FRUITNODE_H_

#include "Fruit.h"
#define Fruitnode FruitNode

typedef struct FruitNode 
{
	Fruit *fruit;
	struct FruitNode *next;
} FruitNode;

#endif