#ifndef _DOG_H_
#define _DOG_H_
#include"Animal.hpp"
#include<iostream>
using namespace std;

class Dog : public Animal //add public
{
public:
	
   Dog();
   Dog(string name, char mark, int* pattern, int size, int position);
   //~Dog();
	virtual void showExcitement();


};
#endif
