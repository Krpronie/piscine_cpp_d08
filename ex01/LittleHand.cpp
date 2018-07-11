#include "LittleHand.h"

void LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons,FruitBox& bananas,  FruitBox& limes)
{
  FruitBox tmp(unsorted.nbFruits());  
  Fruit* fruit;
  
  while ((fruit = tmp.pickFruit()) != NULL)
    tmp.putFruit(fruit);
  while ((fruit = tmp.pickFruit()) != NULL)
    if (fruit->getVitamins() == 5)
      bananas.putFruit(fruit);
    else if (fruit->getVitamins() == 3)
      lemons.putFruit(fruit);
    else if (fruit->getVitamins() == 2)
      limes.putFruit(fruit);
    else
      unsorted.putFruit(fruit);
}