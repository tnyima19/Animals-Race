#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream> //std
class Animal{
public:
	Animal();
   Animal(std::string name, char mark, int* pattern, int size, int position);
	~Animal();
	void setPatternAndLength(int* pattern, int size);
	void setMark(char mark);
	void setName(std::string name);
	void setPosition(int position);
	int* getPattern() const;
	int getPatternLength() const;
	int getPosition() const;
	std::string getName() const;
	void move();
	
	char getMark() const;
	virtual void showExcitement() const;

private:
	int patternLength;// length of race is constant. 
	int* pattern;
	int position;
	char mark;
	std:: string name;
};
#endif
