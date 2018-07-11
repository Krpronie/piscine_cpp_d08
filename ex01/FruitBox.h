#ifndef FRUITBOX_H_
#define FRUITBOX_H_

#include <iostream>
#include <string>
#include "FruitNode.h"
#include "Fruit.h"

class FruitBox
{
 protected:
  int _nb;
  int _size;
  FruitNode* _list;

 public:
  FruitBox(int);
  virtual ~FruitBox();

  int nbFruits() const;
  FruitNode* head() const;

  bool putFruit(Fruit*);
  Fruit* pickFruit();
};

#endif