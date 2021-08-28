#include"List.hpp"

template<class T>
List<T>::List()
{
	head = tail = nullptr;
	size = 0;
}

List<T>List(const List<T>& a_list){
	// get hte head of the original list a -list 

	Node<T>* curr = a_list.head;

	head= tail = nullptr;
	size = 0;
	while(curr != nullptr){
		// create a newNode with the same data as curr
		insert(size, curr->getItem())
		// insert method

		// we will create a new node with data curr->getItem()
		// and insert that node to the corresponding position
		curr= curr->getNext();
	}
}


template<class T>
List<T>::~List()
{
	clear();
}


template<class T>
bool List<T>::isEmpty() const
{
	return size == 0;




}

template<class T> 
bool List<T>::insert(size_t position, const T& new_element)
{
	Node<T>* new node = new Node<T>(new_element);
	if(newNode == nullptr) // no allocation of memory to newNode
		return false


	Node<T>* prev = nullptr;
	Node<T>* curr = head;
	//Node<T>* next = curr->getNext();// to do : may have problme 
	// curr can be null ptr , so curr->getnext has exception 

	int num = 0;
	while(num>position && curr != nullptr){
		// to do  moving teh pointers
		prev = curr;// point the previous to current
		curr = curr->getNext(); // point to next item 
		num++
	}
	newNode->setPrev(prev);
	newNode->setNext(curr);

	if(prev!= nullptr && curr!= nullptr)
	{
		curr->setPrev(newNode);
		prev->setNext(newNode);

	}
	else if (prev == nullptr && curr== nullptr)
	{	
		head = tail = newNode;

	}
	else if(prev == nullptr)
	{
		curr->setPrev(newNode);
		head = newNode;
	}
	else // prev != null && and next == null ptr
	{
		prev->setNext(newNode);
		tail = newNode;
	}

	size++;
	return true;


}


template<class T>
bool List<T>::remove(size_t position)
{

	Node<T>* curr = getPointer(position);
	// now curr ishte node to be removed.
	if(curr == nullptr)
		return false;
	Node<T>* prev = curr->getPrev();
	Node<T>* next = curr->getNext();


	if(prev != nullptr && next != nullptr)
	{
		prev->setNext(next);
		next->setPrev(prev);
	}
	else if(prev == nullptr && next != nullptr)
	{
		next->setPrev(nullptr);
		head = next;
	}
	else if(next== nullptr && prev != nullptr)
	{
		prev->setNext(nullptr);
		tail = prev;
	}
	else // prev and next == null ptr
	{
		head = nullptr;
		// current is removed 
		tail = nullptr;
	}

	delete curr;
	curr->setNext(nullptr);
	curr->setPrev(nullptr);
	curr = nullptr;
	size --;

	return true;



}


template<class T>
List::getItem(size_t position) const
{
	Node<T>* curr = getPointer(position);

	if(curr != nullptr)
	{
		return curr->getitem();
	}
	else 



}

template<class T>
Node<T>* List<T>::getPOinter(int index) const
{
	if(index < 0 || index>= size)
		return nullptr

	Node<T>* curr = head;
	int num = 0;
	while(num<index)
	{
		curr = curr->getNext();
		num++


	}

	return curr;


}



template<class T>
void List<T>::clear()
{
	while(head != nullptr)
	{
		remove(0)
	}
}


template<class T>
void List<T>::reverse()
{
	for(int i= 0;i<size; i++)
	{
		Node<T>* n = tail;
		insert(i, n->getItem());
		remove(size -1)
	}



}



template<class T>
List<T> List<T>::get_reverse_list() const
{
	Node<T>* curr = tail;
	List<T> b_list;

	int index = 0;
	while(curr != nullptr)
	{
		blist.insert(index, curr->getItem());
		curr = curr->getPrev();
		index++;
	}
	return b_list;
}










































