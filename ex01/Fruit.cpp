#include "Fruit.h"

Fruit::Fruit()
{
  _name = "fruit";
  _vitamins = 0;
}

Fruit::Fruit(std::string const name, int vita)
{
  _name = name;
  _vitamins = vita;
}

Fruit::~Fruit(){

}

std::string const& Fruit::getName() const
{
  return (_name);
}

int	Fruit::getVitamins() const
{
  return (_vitamins);
}