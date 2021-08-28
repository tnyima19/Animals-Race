#include"Road.hpp"


Road::Road() : length(70)
{

	block = new char[length +1];
	clear();

}

Road::Road(int size) : length(size> 0 ? size:70)
{
	
	block = new char[length+1];
	
	clear();

}



void Road::clear()
{
	// code goes here. 
	for(int i =0;i<length; i++)
		block[i]= ' ';
	

	block[length] = '\0';
	

}

int Road::getLastBlock(){
	// 

	int last_block = length-1;
	return last_block;
}

void Road::mark(int position, char ch)
{
	// use this to mark the posito fo animal, 
	//use char to make array of string of spaces. 
	//road[position] = ch;
	
		block[position]= ch;
		
}
Road::~Road(){
	delete[] block;
	block = 0;
}

const char* Road::toString() const{
	// return a char array to represent the contente of blocks of the road object. 

	return block;

}

