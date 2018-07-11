#ifndef FRUIT_H_
#define FRUIT_H_

#include <iostream>
#include <string>

class Fruit
{
  std::string _name;
  int _vitamins;
  
 public:
  Fruit();
  Fruit(std::string const, int);
  virtual ~Fruit();

  std::string const& getName() const;
  int getVitamins() const;
};

#endif