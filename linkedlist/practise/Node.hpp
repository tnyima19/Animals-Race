#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<vector>
template<class T>

class Node{
public:
	Node();
	Node(T an_item);
	Node(T an_item, Node* next);
	Node<T> getitem();
	Node* getNext();// gives us pointer 
	void setItem(const T& an_item);
	void setNext(Node* next);


private:
	T item_;
	Node<T>* next_;
};
#include "Node.cpp"
#endif