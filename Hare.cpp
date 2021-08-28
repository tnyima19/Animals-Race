#include"Hare.hpp"


Hare::Hare() //: length(10)
{

    int defaultPattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    //for (int i = 0; i < length; i++)
    //    pattern[i] = defaultPattern[i];
    int size = sizeof(defaultPattern) / sizeof(defaultPattern[0]);
    setName("Hare");
    setMark('H');
    setPatternAndLength(defaultPattern, size);
    setPosition(0);
}

Hare::Hare(string name, char mark, int* pattern, int size, 
   int position)
   // length(size > 0 ? size : 10) // if (length > size ) go through the code below, else size = 10
{
//    this->pattern = new int[this->length]; 
//    
//    if (size > 0)
//       for (int i = 0; i < size; i++)
//           this->pattern[i] = pattern[i];
//    else //size <= 0
//    {
//        int defaultPattern[] = 
//            {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
//        for (int i = 0; i < length; i++)
//            this->pattern[i] = defaultPattern[i]; 
//            
//    }
   setName(name);
   setMark(mark);
   setPatternAndLength(pattern, size);
   setPosition(position);
}



void Hare::showExcitement() const
{
	cout<<"jump and wag tail!!"<<endl;
}