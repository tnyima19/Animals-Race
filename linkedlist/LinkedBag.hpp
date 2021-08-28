#ifndef LINKED_BAG_H
#define LINKED_BAG_H
#include "Node.hpp"
#include <vector>
template<class T> 

class LinkedBag
{
public: 
	LinkedBag();
	LinkedBag(const LinkedBag<T>& a_bag);
	~LinkedBag();
	bool add(const T& item);
	bool remove(const T& item);
	void clear();
	int getCurrentSize() const;
	bool isEmpty() const;
	int getFrequencyOf(const T& item) const;
	bool contains(const T& item) const;
	std::vector<T> toVector() const;
private:
	Node<T> *head;
	int size;

};
#include "LinkedBag.cpp"
#endif