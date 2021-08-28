#ifndef HARE_H_
#define HARE_H_
#include"Animal.hpp"
#include<iostream>
using namespace std;


class Hare : public Animal
{
public:
   Hare();
   Hare(string name, char mark, int* pattern, int size, int position);
   virtual void showExcitement() const ;



};
#endif



