#include"node.hpp"
template<class T>
Node<T>::Node(){
	prev_ = nullptr;
	next_ = nullptr;
	 
}


template<class T>
Node<T>::Node(const T& an_item){
	item_ = an_item;
	next_ = nullptr;
	prev_ = nullptr;
}


template<class T>
Node<T>::Node(Node<T>* next, NOde<T>* prev, T& an_item)
{
	next_= next;
	prev_ = prev;
	item_= an_item;

}

template<class T>
Node<T>* Node<T>::getNext()
{
	return next_;


}


template<class T>
Node<T>* Node<T>::getPrev()
{
	return prev_;
}

template<class T>
void Node<T>::setNext(Node<T>* next){
	next_ = next;
}

template<class T>
void Node<T>::setPrev(Node<T>* prev)
{
	prev_ = prev;
}

void Node<T>::setItem(const T& an_item) const
{
	item_= an_item;
}



template<class T>
T Node<T>::getItem() const{
	return item_;
}



























