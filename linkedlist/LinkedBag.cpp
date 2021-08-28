#include"LinkedBag.hpp"
#include<vector>

template<class T>

LinkedBag<T>::LinkedBag(){
	head = nullptr;
	size = 0;


}
template<class T>
LinkedBag<T>::LinkedBag(const LinkedBag<T> a_bag)
{	
	head = nullptr;
	size = 0;
	std::vector<T> data = a_bag.toVector();
	for(int i = data.size() -1; i>=0;i--)
		this->add(data[i]);

	// we do it in reverse because last is created first nad it ends up at the end of the list.




}


template<class T>
LinkedBag<T>::~LinkedBag()
{
	clear();
}

LinkedBag<T>::add(const T& item)
{
	// shallow copy , problem; when a destructor is called , an item 
	// in the linked bag is released more than once.
	//even though that item is applied through new operartor. 
	// for only once
	// head = a_bag.head;
	// size = a_bag.size;

	Node<T>* newNode = new Node<T>(item, head);// create a new node.
	if(newNode = nullptr)
		return false;

	//if new node is not nullptr. hen it has data saved in tem_ data member, and head saved in next_ data member.
	// se code of Node.cpp
	head = newNode;
	size++;
	return true;


}

template<class T>
bool LinkedBag<T>::remove(const T& item){
	Node<T>* prev = nullptr; // prev is the next neighbor of hte current.
	Node<T>* curr = head;

	while(curr != nullptr)// curr is not an empty node
	{
		if(curr->getItem() == item)
		{
			//TO do: remove curr.
			//pseudocode ; prev->next = curr->next;
			if (prev == nullptr)// if item is in the first node
				head = curr->getNext(); // second item becomes hte first item
			else 
				prev->setNext(curr->getNext());// the node is in hte middle somewhere, pointer which pointed to item,we set the nextitem
			// as teh item next to removed. and the previous item of 

			curr->setNext(nullptr);// setting the pointer of node to be removed to null so that it doesn't point anything
			delete curr; // deleting the curr.
			curr = nullptr;
			size --;
			return true;
		}
		prev = curr; // if not found previous becomes current 
		curr = get->getNext();// and current becomes next, search goes on
		// to curr.
	}
	// search was unsuccessful

	return false;
}

template<class T>
bool LinkedBag<T>::isEmpty() const
{	
	// two ways
	// if(size ==0)
	// return true;
	// else false;
	// OR

	if(head == nullptr)
		return true;
	
	
	return false;



}

template<class T>
int LinkedBag<T>::getFrequencyOf(const T& item) const
{
	int freq = 0; // we have not searched the linked bag yet.
	Node<T>* curr = head;
	while(curr != nullptr)
	{
		if(curr->getItem == item){
			freq++;

		}
		curr= curr->getNext();
	}
	return freq;
}

template<class T>
bool LinkedBag<T>::contains(const T& item) const
{
	if(getFrequencyOf(item)>0)
		return true;

	return false;
}

template<class T>
int LinkedBag<T>::getCurrentSize() const 
{
	 return size;

}


template<class T>
std::vector<T> LinkedBag<T>::toVector() const
{
	std::vector<T> itemVector;
	Node<T>* curr = head;
	while(curr != nullptr){
		itemVector.push_back(curr->getItem());
		curr= curr->getNext();
	}
	return itemVector;



}

template<class T>
void LinkedBag<T>::clear() const{
	Node<T>* curr = head;
	while(curr!= nullptr){
		remove(curr->getItem());
		curr = head;
	}
}

