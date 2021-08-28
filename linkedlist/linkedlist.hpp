
// create nodes. 

struct node{
	int data;
	node* next;// pointer points to another node

};



node* n;
node* t;// for temporary.
node* h ; // for head/

// creating node pointers ability to piont to another nodes. 




n = new node; // it has  n point to newly created node. 
// fill hte new node with data 

n->data = 1;

t = n;
h =n;
// we are telling our head nad temporary pointers to point the same thing that n is pointing.


n = new node;// points to newly created node. 

n->data = 2; for the new node. 
 
 t-> next = n;
 t=t->next ;


 // moves t pointer to the next node. 


 // 

 n = new node;
  n ->data = 3;

  n = new node;
  t->next = n;
  t = n;// t->n
  //t points to the new node. 


n-> next = null;


A linked list is a data structure in which the objects are arranged inlinear order. 
linear order is deermined by the arrya indices, the order in a linked list is determinded by a pointer in each obejct. 

Linked lists provide a simple, flixible represenattaion for dynamic sets , supporting all the operations listed no page. 


each element of a doule linked list L is an object with an attribute key an dtwo other pointer attributes; next and preve. the object may also contain other satallinte. data . 
Given an element of

doubly linked list has two pointers next and prev. the
the objects may also contain otehr satalliete data structure
if x.prev  = nil 
	the element x has no predecessor and tehrefore it is the first element, or head, of the list. 

if x. next = nil , the elemen x has no successolr and is tehre fore the last eleemtn , or tail of the list. 

	An attrubite L.head points the first elemt of the llist. 
If L.head - nil , the list is empty . 

A list may have one of several forms. It may be either singly lined or doubley linked . it may be soreted or not. 
it may be circular or not. 
If a list is singly linked we omit the prev pointer in each element . 
if a list is sorted thelinear order of hte list corresponsds ot the linear order of key s stored in elemen of the list; nextthe minimyum elemen is the head of thel ist. and he maximum elemen is hte tail of

in a circular list, the prev pointer  of the head of the list points to the tai.l, an dthe next pointer of the tail of hte list points to teh head. 

we can think of circular list as rign of elements . 




Searching a linked list. 

The procedure list-search (l, k) finds the first eleme twith key k in list L  by a simple linear search , returning apointer to this 
element, 
if no object with key k appears in teh list, then the procedure return s Nil. For thelinked list in Figure 10.3(a), the call list -search (l,4) returns a opinter to the third element, and teh 
call LIST-Search(l,7) returns nil. 


list search(l,k)
x = L.head
while(x != nil and x.key !=k){
	x = x.next;
}
return x;


