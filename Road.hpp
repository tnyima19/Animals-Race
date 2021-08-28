#ifndef ROAD_H_
#define ROAD_H_

#include<iostream>
using namespace std;

class Road
{
public:
	Road();// create road for testing 
	Road(int size);// create road using length given by user. 
	~Road();// delete. 
	int getLastBlock();
	void clear();
	void mark(int position, char ch);
	const char* toString() const;
private:
	//int length;
	//int position;
	//char ch;
	char* block;
	int length ;

};
#endif