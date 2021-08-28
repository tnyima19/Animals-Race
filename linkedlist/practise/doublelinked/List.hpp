#ifndef LIST_H
#define LIST_H
#include<vector>
#include<iostream>
using namespace std;

template<class T>

class List{
public:
	List();
	List(const List<T>& a_list);
	~List();
	bool remove(size_t position);
	bool insert(size_t position, const T& new_element);
	void clear();
	bool isEmpty() const;
	size_t getLength() const;
	T getItem(size_t position) const;
	Node<T>* getPointer(int index) const

	//getFrequency(const T& an_item);

private:
	Node<T>* head;
	Node<T>* tail;
	int size;
};
#include "List.cpp"
#endif