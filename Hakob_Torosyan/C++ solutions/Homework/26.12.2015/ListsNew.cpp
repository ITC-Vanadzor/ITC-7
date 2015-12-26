#include <iostream>

struct Node {
	Node(size_t,Node*,Node*);
  	Node* next;
	Node* prev;
	size_t data;
	~Node();
};

Node::Node(size_t data, Node* next, Node* prev)
:data(data),next(next),prev(prev)
{};
Node::~Node()
{
	delete next;
	delete prev;
	next = 0;
	prev = 0;
	
};

struct List {
	List();
	Node* head;
	Node* tail;
	size_t count;
	void PushFront(size_t);
	void PushBack(size_t);
	void Insert(size_t,Node*);
	bool Check();
	Node* get(size_t);
	void Reverse();
	~List();	
};    
List::List()
	:head(0),tail(0),count(0)
	{};
void List::PushFront(size_t value)
{
	Node* node = new Node(value,head,0);
	if(count)
	{
		head->prev = node; 
	}
	else
	{
		tail = node;
	}
	head = node;
	++count;
	std::cout << "PushFront " << value << std::endl;
};
void List::PushBack(size_t value)
{
	Node* node = new Node(value,0,tail);
	if(count)
	{
		tail->next = node;
	}
	else
	{
		head = node;
	}
	tail = node;
	++count;
	std::cout << "PushBack " << value << std::endl;
};
void List::Insert(size_t value, Node* nodik)
{
	if(nodik == tail)
	{
		PushBack(value); 
	}
	else
	{
		Node* node = new Node(value,nodik->next,nodik);
		node->next = nodik->next;
		node->prev = nodik;
		node->next->prev = node;
		nodik->next = node;
	}
	++count;
};
bool List::Check()
{
	if(tail->next != 0)
	{
		Node* nodex;
		nodex = head;
		while(count > 1)
		{
			if(tail->next == nodex)
			{
				return true;
			}
			--count;
			nodex = nodex->next;
		}
		return false;
	}
	return false;
};
Node* List::get(size_t c)
{
	if(c > count)
	{
		return 0;
	}
	Node* node = head;
	for(int i = 1; i <= c; ++i)
	{
		node = node->next;
	}
	return node;
};
void List::Reverse()
{	if(count==0)
	{
		std::cout << "List is empty " << std::endl;
	}
	else
	{
		Node* temp;
		for(int i = 1; i <= count; ++i)
		{
			temp = get(i)->next;
			get(i)->next = get(i)->prev;
			get(i)->prev = temp;
		}
	}
}; 

int main()
{
	List *myList = new List();
	myList->PushBack(15);
	for(int i = 1; i <= 10; ++i)
	{
		myList->PushFront(i);
	}
	if(myList->Check() == true)
	{
		std::cout << "True " << std::endl;
	}else
	{
		std::cout << "False "<< std::endl;
	}
	
	return 0;
}
