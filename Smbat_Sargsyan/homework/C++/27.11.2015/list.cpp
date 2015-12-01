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
	{}
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
	void insert(int i_d, node* i_p);
	size_t size();
	bool empty();
	void pop_back();
	void pop_front();
	void remove(node* r_p);
	node* get(size_t i);
};
list::list()
	:m_head(0)
	,m_tail(0)
	,m_count(0)
{}
void list::push_back(int b_d)
{
	node* temp = new node(b_d, 0, m_tail);
	if(!m_count)
	{
		m_head = temp;
	}
        else
	{
	    m_tail->m_next=temp;
	}
        m_tail=temp;
	++m_count;
	std::cout << "push_back " << b_d << std::endl;
}
void list:: push_front(int f_d)
{
	node* temp = new node(f_d, m_head, 0);
	if(!m_count)
	{
		m_tail = temp;
	}
        else
	{
	    m_head->m_prev=temp;
	}
        m_head=temp;
	++m_count;
        std::cout << "push_front " << f_d << std::endl;
}
void list:: insert(int i_d, node* i_p)
{
	if(i_p == m_tail)
	{
		push_back(i_d);
	}
	else
	{
		i_p->m_next = new node(i_d, i_p->m_next, i_p);
          	i_p->m_next->m_next->m_prev = i_p->m_next;
		++m_count;
	}
        std::cout << "insert " << i_d << std::endl; 
}
size_t list::size()
{
        std::cout << "size is " << m_count << std::endl;
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
        std::cout << "pop_back " << m_tail->m_data << std::endl;
	if(m_count== 1)
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
                std::cout << "pop_front " << m_head->m_data << std::endl;
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
		r_p->m_next = r_p->m_next->m_next;
		delete r_p->m_next->m_prev;
          	r_p->m_next->m_prev = r_p;
		--m_count;
	}
        std::cout << "remove " << std::endl;
} 
node* list::get(size_t pos)
{
        if(pos>m_count) return 0;
	node*ptr = m_head;
	for(size_t j = 0; j < pos; ++j)
	{
		ptr = ptr->m_next;
	}
        std::cout << "get list " << ptr->m_data << std::endl;
        return ptr;
}
list::~list() {
        node* m_current = m_head;
        while( m_current != 0 ) {
             node* m_next = m_current->m_prev;
             delete m_current;
             m_current = m_next; 
        }
        m_head = 0; 
}
int main()
{ 
  list mylist;
  mylist.push_back(33);
  mylist.push_back(11);
  mylist.push_front(55);
  mylist.push_front(77);
  mylist.push_back(155);
  mylist.push_front(133);
  mylist.push_front(779);
  mylist.insert(99,mylist.get(5));
  mylist.insert(88,mylist.get(2));
  mylist.pop_back();
  mylist.pop_front();
  mylist.remove(mylist.get(3));
  mylist.push_back(888);
  mylist.pop_front();
  mylist.remove(mylist.get(3));
  mylist.push_front(1111);
  int count=mylist.size();
  for(int i=0;i<count;i++) {
     mylist.get(i);
  }
	

  return 0;
}
