#ifndef _DUCK_H_
#define _DUCK_H_
#include"Animal.hpp"
#include<iostream>
using namespace std;

class Duck : public Animal //add public
{
public:
	
   	Duck();
   	Duck(string name, char mark, int* pattern, int size, int position);
    //~Dog();
	virtual void showExcitement() const;


};
#endif
