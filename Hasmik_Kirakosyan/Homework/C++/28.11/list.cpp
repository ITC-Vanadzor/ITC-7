#include <iostream>
#include <cassert>
struct node
{
	node* m_next;	
	node* m_prev;
	int m_data;
	node(int data, node* next, node* prev)
	:m_next(next)
	,m_prev(prev)
	,m_data(data)
	{
		//std::cout << "argument constructor" << std::endl;	
	}
	~node() 
	{
		delete m_next;
		std::cout << "Delete one node " <<std::endl;
	}
};

struct list
{
	node* m_head;
	node* m_tail;
	size_t m_count;
	list();
	~list();
	void push_back(int b_d);
	void push_front(int f_d);
	void insert(const int i_d, node* i_p);
	size_t size();
	bool empty();
	void pop_back();
	void pop_front();
	void remove(node* r_p);
	node* get(size_t i);
	void type();
};
list::list()
	:m_head(0)
	,m_tail(0)
	,m_count(0)
{
	std::cout<<"Default constructor in list"<<std::endl;
}
void list::push_back(int b_d)
{
	m_tail = new node (b_d, NULL, m_tail);	
	if(!m_count)
	{
		m_head = m_tail;
	}
	++m_count;
	
}
void list::push_front(int f_d)
{
	m_head = new node(f_d, m_head, 0);
	if(!m_count)
	{
		m_tail = m_head;
	}
	++m_count;
}
void list::insert(const int i_d, node* i_p)
{
	if(i_p == m_tail)
	{
		push_back(i_d);
	}
	else
	{
  		node* new_node = new node(i_d, i_p->m_next, i_p);
		new_node->m_next->m_prev = new_node;
		i_p->m_next = new_node;
	/*	std::cout<<"\n\nPrevious node data "<<new_node->m_prev->m_data
			 <<" | inserted node data= "<<new_node->m_data
			 <<" | next  node data = "<<new_node->m_next->m_data
			 <<std::endl;
         */
		++m_count;
	}
}
size_t list::size()
{
	return m_count;
}
bool list::empty()
{
	return m_count == 0;
}
void list::pop_back()
{
	if(empty())
	{
		return;
	}
	if(m_count == 1)
	{
		assert(m_tail == m_head);
		delete m_tail;
		m_tail = 0;
		m_head = 0;
	}
	else
	{
		m_tail = m_tail->m_prev;
		delete m_tail ->m_next;
		m_tail ->m_next = 0;
	}
	--m_count;
}
void list::pop_front()
{
	if(empty() || m_count == 1)
	{
		pop_back();
	}
	else
	{
		m_head = m_head->m_next;
		delete m_head ->m_prev;
		m_head ->m_prev = 0;
		--m_count;
	}
}
void list::remove(node* r_p)
{
	if(r_p == m_tail)
	{
		pop_back();
	}
	if(r_p == m_head)
	{
		pop_front();
	}
	else
	{
		r_p->m_next->m_prev = r_p->m_prev;
		r_p->m_prev->m_next = r_p->m_next;
		delete r_p;
		--m_count;
	}
}
node* list:: get(size_t pos)
{	
	node* ptr = m_head;
	if (pos == size()) return m_tail;
	if (pos == 1) return m_head;
	if (pos > size()) 
		{
			std::cout<<"ERROR :Entered position is more then list size"<<std::endl;
			return 0;
		}
	if (pos == 0) 	
		{
			std::cout<<"ERROR :There is no list member in 0 position"<<std::endl;
			return 0;
		}
	else
		{
			for(size_t j = 0; j < pos-1; ++j)
			{		
				ptr = ptr->m_next;
			}
			return ptr;
		}
};

void list::type () 
{
	for (size_t i = 0; i < this->size(); i++)
		std::cout<<this->get(i+1)->m_data<<" ";	
	std::cout<<"\n\n"<<std::endl;
}

list::~list() 
{
	delete m_head;
	m_head=NULL;
	m_tail=NULL;	
};



int main()
{

	list A;

	// Test empty
	A.type();
	std::cout<<" 1 - list is empty, 0 - list is full | "<<A.empty()<<		std::endl;	

	// Test push_back
	A.push_back(99); // 99
	A.type();
	A.push_back(88); // 99 88 
//	A.push_back(77); // 99 88 77
	A.type();	 // Type list 

	// Test push_front 
	A.push_front(66);  // 66 99 88 77
	A.push_front(55);  // 55 66 99 88 77
	A.push_front(44);  // 44 55 66 99 88 77
	A.type();	   // Type list

	// Test insert element
	A.insert(77, A.get(3)); // 44 55 66 77 99 88 77
	A.insert(88, A.get(4)); // 44 55 66 77 88 99 88 77
//	A.insert(111,A.get(6)); // 44 55 66 77 88 99 111 88 77
	A.type();		// Type list

	// Test delete member from list
	A.remove(A.get(5));     // 44 55 66 77 88 99 111 77
	A.type();		// Type list

	// Test empty and size. Size = 8, Empty = 1
	std::cout<<"1 - list is empty, 0 - list is full | "<<A.empty()<<" Size |	"<<A.size()<<std::endl;
	
	// Test pop_back
	A.pop_back();		// 44 55 66 77 88 99 111
	A.type();		// Type list

	// Test pop_front
	A.pop_front();		// 55 66 77 88 99 111
	A.type();		// Type list


return 0;
}
