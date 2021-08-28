#ifndef NODE_H_
#define NODE_H_
template<class T>
class NODE_H_
{
public:
	Node();
	Node(const T& item);
	Node(const T& item, Node* next);
	T getItem() const;
	Node* getNext() const();
	void setItem(cont T& item);
	void setNext(Node* next);
private:
	T item_;
	Node* next_;

};
#include "Node.cpp"
#endif