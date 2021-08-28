#include "Node.hpp"
#include<iostream>
template<class T>

Node<T>::Node()
{
	next_ = nullptr;
}
template<class T>
Node<T>::Node(const T& item)
{
	item_ = item;
	next_ = nullptr;
}

template<class T> 
Node<T>::Node(const T& item, Node* next)
{
	item_ = item;
	next_ = next;

}

template<class T>
T Node<T>::getItem() const{
	return item_;
}

Node* Node<T>::getNext() const{
	// next is a pointer points to next item
	return next_;

}
template<class T>
void Node<T>::setItem(const T& item){
	item_ = item;

}


template<class T>
void Node<T>::setNext(Node* next){
	next_ = next;
}