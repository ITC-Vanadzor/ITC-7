#include <iostream>
#include <cstdlib>
struct Node {
	Node(size_t, Node*);
	Node* next;
	size_t data;
	~Node();
};
Node::Node(size_t data, Node* next)
	:data(data),next(next)
	{};
Node::~Node(){
	delete next;
	next = 0;
};

struct List {
	List();
	Node* head;
	Node* tail;
	size_t count;
	void PushBack(size_t);
	void PushFront(size_t);
	Node* get(size_t);
	void Insert(size_t, Node*);
	bool Check();
	~List();
	};
List::List()
	:count(0),head(0),tail(0)
	{};
void List::PushBack(size_t value){	
	Node* node = new Node(value,0);
	if(count == 0){
		head = node;
	}else{
		tail->next = node;
	}
	tail = node;
	++count;
	std::cout << "PushBack " << value << std::endl;
	};
void List::PushFront(size_t value){
	Node* node = new Node(value,head);
	if(count == 0){
		tail = node;
	}else{
		node->next = head;	
	}
	head = node;
	++count;
	std::cout << "PushFront " << value << std::endl;
	};
Node* List::get(size_t c){
	if(c > count){
		return 0;
	}else{
		Node* node = head;
	for(int i = 1; i <= c; ++i){
		node = node->next;	
	}
	return node;	
	}
	};
void List::Insert(size_t value, Node* nodik){
	if(nodik == 0)
	{
		std::cout << "Wrong imported value " << std::endl;
		exit(0);
	}
	if(nodik == tail){
		PushBack(value);
	}
	else{
	Node* node = new Node(value,nodik->next);
	nodik->next = node;
	}
	++count;
};
bool List::Check(){
	if(tail->next != 0){
	Node* node = head;
	for(int i = 1; i <= count; ++i){
	if(tail->next == node){
	return true;
	}
	node = node->next;
	}
	return false;
	}
};
int main()
{
	List* myList = new List();
	myList->PushBack(13);
	myList->PushFront(20);
	myList->Insert(12,myList->get(4));
	if(myList->Check()){
	std::cout << "True " << std::endl;
	}else{
	std::cout << "False " << std::endl;
	}
	return 0;
}




















