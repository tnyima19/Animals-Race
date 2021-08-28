#ifndef TORTOISE_H_
#define TORTOISE_H_
#include"Animal.hpp"
#include<iostream>
using namespace std;


class Tortoise : public Animal
{
public:
   Tortoise();
   ~Tortoise();
   Tortoise(string name, char mark, int* pattern, int size, int position);
   virtual void showExcitement() const ;



};
#endif



