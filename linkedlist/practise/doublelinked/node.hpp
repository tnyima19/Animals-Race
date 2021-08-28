#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<vector>

using namespace std;

template<class T>

class Node{
public:
	Node();// consructor
	Node(const T& an_item);
	Node(Node<T>* next, Node<T>* prev, T& an_item);
	//~Node();
	Node<T>* getNext();// get next pointer 
	Node<T>* getPrev(); // get previous pointer.
	T getItem() const ; // get the item
	void setNext(Node<T>* next);
	void setPrev(Node<T>* prev);
	void setItem(const T& item)const ;


private:
	Node<T>* next_;
	Node<T>* prev_;
	T& item_;
};
#include"node.cpp"
#endif