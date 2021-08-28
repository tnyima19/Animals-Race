#include "Node.hpp"

template<class T>
Node<T>::Node(){
	next_ = nullptr
}

template<class T>
Node<T>::Node(T an_item){

	item_ = an_item;

}

template<class T>
Node<T>::Node(T an_item, Node* next)
{
	item_ = an_item;
	next_ = next;
}




template<class T>
Node* Node<T>::getNext(){
	return next_;

}

T Node<T>:: getItem(){
	return item_;

}

template<class T>
void Node<T>::setItem(T an_item){
	item_ = an_item;

}

template<class T>
void Node<T>::setNext(Node* next){
	next_ = next;
}