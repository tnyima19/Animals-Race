#include"Elephant.hpp"


Elephant::Elephant() //: length(10)
{
// create new pointers. dynmaically allocating 
//position = 0;
//mark = 'H';
//name = "Hare";

 //pattern = new int[length]; //dynamically allocated 10-ints
    int defaultPattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    //for (int i = 0; i < length; i++)
    //    pattern[i] = defaultPattern[i];

    setName("Elephant");
    setMark('E');
    setPatternAndLength(defaultPattern, 10);
    setPosition(0);
}

Elephant::Elephant(string name, char mark, int* pattern, int size, int position)
   // length(size > 0 ? size : 10) // if (length > size ) go through the code below, else size = 10
{

   setName(name);
   setMark(mark);
   setPatternAndLength(pattern, size);
   setPosition(position);
}



void Elephant::showExcitement() const{
	cout<<"raises its trunk"<<endl;
}