#include "LinkedBag.cpp"

template<class T>
LinkedBag::LinkedBag()
{
	head = nullptr;
	size = 0;
}


template<class T>
LinkedBag<T>::LinkedBag(const LinkedBag<T> a_bag)
{
	
	// making a deep copy
	head = nullptr;
	size = 0;
	Node<T>* tail = head;
	Node<T>* curr = a_bag.head;
	Node<T>* new Node;
	while(curr!== nullptr)
	{
		// create a node with data from curr, but next is nullptr
		newNode = new Node<T>(curr->getItem());//dynmic memeory allocation and calling constructor
		if(tail == nullptr){
			tail = head = newNode;
		}
		else{
			// add newnode to tail
			tail->setNext(newNode);

		}
	}

}

template<class T>
bool add(T& an_item){

Node<T> newNode = new Node(an_item, head);
if(newNode == nullptr)
	return false;


head = newNode;
size++
return true




}


bool remove(T& an_item)
{

Node<T>& prev = nullptr;// prev is hte previous neighbor of hte current
Node<T>& curr = head;
// new curr pointer pointing to head. 

while(curr != nullptr){
	if(curr->getItem() == an_item){
		// now remove the item
		//curr->getNext() = nullptr;
		if(prev = nullptr) // if first integet is equal to the item, tehn prev pointer will remain nullptr
			head = curr->getNext()
		else
			prev->setNext(curr->getNext()); // make the previous next, hte current next. 
			//curr->setItem(curr->getNext()) 
		curr->setNext(nullptr) = nullptr;
		// point to null pointer. pointer of item. 
		size--;
		return true;
		}
		prev = curr;
		curr = curr->getNext();
		// remember pointer points to next item.
		curr->setNext(curr->getNext())
		//curr->setitem()


}
return false;



}


template<class T>
int LinkedBag<T>::frequencyof(const T& an_item){
	int count =0;
	//Node<T>* prev = nullptr;
	Node<T>* curr = head;
	while(curr != nullptr)
	{
		if(curr->getItem() == an_item){
			count++;
		}
		curr = getNext();
	}
	return count;

}

bool LinkedBag<T>::Contains(T& an_item){
	if (frequencyof(T& an_item)>0)
		return true;


	return false;
}

bool LinkedBag<T>::isEmpty(){
	Node<T>* curr = head;
	if(curr == nullptr)
		true;
	else 
		false;
}


void clear(){

}











































