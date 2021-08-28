#include"Animal.hpp"
#include <iostream>
using namespace std;

Animal::Animal() : patternLength(10)
{
// create new pointers. dynmaically allocating 
//position = 0;
//mark = 'A';
//name = "Animal";
    pattern = new int[patternLength];
    int defaultPattern[] = {-2, 3, 6};
    for(int i=0; i<patternLength;i++){
        pattern[i]= defaultPattern[i];
    }
    position = 0;
}

Animal::Animal(string name, char mark, int* pattern, int size,
   int position)
//: length(size > 0 ? size : 10) 
// if (length > size ) go through the code below, else size = 10
{
    setName(name);
    setMark(mark);
    if (size > 0)
       setPatternAndLength(pattern, size);
   //  UNCOMMENT THIS BELOW IF IT DOESN'T WORK IF, IT DOESN'T GIVE DEFAULT TO RANDOM
    else {
        int defaultPattern[] = {-2, 3, 6};
        int defaultPatternSize = 
            sizeof(defaultPattern) / sizeof(defaultPattern[0]);
        this->patternLength = defaultPatternSize;
        this->pattern = new int[defaultPatternSize];
        for (int i = 0; i < defaultPatternSize; i++)
            this->pattern[i] = defaultPattern[i]; 
    }
    
    this->position = position;

	
}

int Animal::getPosition() const
{
	return position;

}

void Animal::setPosition(int newPosition){
	position = newPosition;


}
int Animal::getPatternLength() const{
	return patternLength;
}

void Animal::move(){
	// moving is an array. remember . 
	int index = rand() % patternLength; // i think it sould be rand % 10; ******** Quesiots
	int steps_to_move = pattern[index];
	position = position + steps_to_move;
}


void Animal::setMark(char mark){

	this->mark = mark;

}
void Animal::setName(string name){
	this->name = name;
}

std::string Animal::getName() const {
	return name;

}

char Animal::getMark() const{
	return mark;
}

Animal::~Animal()
{
    delete[] pattern;
    pattern = 0; //set pattern to be nullptr
}

//TODO:
void Animal::setPatternAndLength(int* pattern, int size)
{
    if (size > 0)
    {
        //int defaultPatternSize = sizeof(pattern)/ sizeof(pattern[0]);
       this->patternLength = size;
        for(int i =0; i<size;i++){
            this->pattern[i] = pattern[i];


        }
        // delete from below here if it doesn't work .

    }
    else 
    {
        this->patternLength = 10;
        for(int i=0;i<patternLength;i++){
            this->pattern[i] = pattern[i];
        }
    }
}

//cannot use virtual when define a function,
//only use virtual before a function declaration.
void Animal::showExcitement() const
{
	cout<<"Makes animal sound"<<endl;
}




/// wordsd
// anything.
//something  +33-655-569-026
// going
//manage.
// together.
// will.
//the
//the
// different.\


