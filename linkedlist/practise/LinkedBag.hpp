#ifndef LINKED_BAG
#define LINKED_BAG
#include<iostream>
#include<vector>

using namespace std;
template<class T> 

class LinkedBag
{
public;
	LinkedBag();
	LinkedBag(const LinkedBag<T> a_bag);
	~LinkedBag();
	bool Remove(const T& an_item);
	bool add(const T& an_item);
	int frequencyof(const T& an_item);
	bool contains(const T& an_item);
	std::vector<T> toVector() const;
	bool isEmpty() const;
	void clear();




private:
 	Node<T>* head; 
 	int size;


};
#include "LinkedBag.cpp"
#endif