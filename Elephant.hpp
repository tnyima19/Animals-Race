#ifndef _ELEPHANT_H_
#define _ELEPHANT_H_
#include"Animal.hpp"
#include<iostream>
using namespace std;

class Elephant : public Animal 
{
public:
    Elephant();
    Elephant(string name, char mark, int* pattern, int size, int position);
    ~Elephant();
	virtual void showExcitement() const;


};
#endif
