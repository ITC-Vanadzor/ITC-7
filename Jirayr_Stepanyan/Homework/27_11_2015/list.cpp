#include <iostream>
#include <cassert>
#include <cstdlib>
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
	void push_back(int b_d);
	void push_front(int f_d);
	void insert(int i_d, node* i_p);
	size_t size();
	bool empty();
	void pop_back();
	void pop_front();
	void remove(node* r_p);
	node* get(size_t i);
	void all_list();
	~list();
};
list::list()
	:m_head(0)
	,m_tail(0)
	,m_count(0)
{}
void list::push_back(int b_d)
{
	node* tmp = new node(b_d, 0, m_tail);
	if(!m_count)
	{
		m_head = tmp;
	}
	else
	{
		m_tail->m_next = tmp;
		tmp->m_prev = m_tail;
	}
	m_tail = tmp;
	++m_count;
}
void list::push_front(int f_d)
{
	node* tmp = new node(f_d, m_head, 0);
	if(!m_count)
	{
		m_tail = tmp;
	}
	else
	{
		m_head->m_prev = tmp;
		tmp->m_next = m_head;
	}
	m_head = tmp;
	++m_count;
}
void list::insert(int i_d, node* i_p)
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
	if(empty() || (m_count == 1))
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
	if(r_p == 0)
	{
		return;
	}
	if(r_p == m_tail || r_p == m_tail->m_prev)
	{
		pop_back();
	}
	else
	{
		r_p->m_next = r_p->m_next->m_next;
		delete r_p->m_next->m_prev;
          	r_p->m_next->m_prev = r_p;
		--m_count;
	}
}
node* list:: get(size_t pos)
{
	node*ptr = m_head;
	if(pos == size())
	{
		return m_tail;
	}
	if(pos == 1)
	{
		return m_head;
	}
	if(pos > size() || pos < 1)
	{
		std::cout << "ERROR in get function your entered number is big then list size or less then 0" << std::endl;
		exit(1);
	}
	for(size_t j = 1; j < pos; ++j)
	{
		ptr = ptr->m_next;
	}
	return ptr;
}
void list::all_list()
{
	for(size_t i = 1; i <= this->size(); ++i)
	{
		std::cout << this->get(i)->m_data << " " << std::endl;
	}
}
list::~list()
{
	if(m_tail != m_head)
	{
		delete m_head;
		delete m_tail;
	}
	else
	{
		delete m_head;
	}
	m_count = 0;
}

int main()
{
	list a;
	a.push_back(5);
	a.push_front(6);
	a.push_back(66);
	a.insert(88, a.get(1));
	a.push_front(55);
	a.pop_back();
	a.pop_front();
	a.remove(a.get(1));
	a.all_list();	
	

  return 0;
}
