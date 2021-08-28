#include"Tortoise.hpp"
#include <iostream>
using namespace std;

Tortoise::Tortoise() //: length(10)
{
// create new pointers. dynmaically allocating 
//position = 0;
//mark = 'H';
//name = "Hare";

 //pattern = new int[length]; //dynamically allocated 10-ints
    int defaultPattern[] = {3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
    //for (int i = 0; i < length; i++)
    //    pattern[i] = defaultPattern[i];
    int size = sizeof(defaultPattern) / sizeof(defaultPattern[0]);
    setName("Tortoise");
    setMark('T');
    setPatternAndLength(defaultPattern, size);
    setPosition(0);
}

Tortoise::Tortoise(string name, char mark, int* pattern, int size, int position)
   // length(size > 0 ? size : 10) // if (length > size ) go through the code below, else size = 10
{


   setName(name);
   setMark(mark);
   setPatternAndLength(pattern, size);
   setPosition(position);
}


void Tortoise::showExcitement() const
{
	cout<<"stick out head"<<endl;
}

// also create desctructor