//list created by Meruzh & Gevor
#include <iostream>
#include <cassert>

struct node
{
	node* m_next;
	node* m_prev;
	int m_data;
	node(int data, node* next, node* prev)
	:m_data(data),m_next(next),m_prev(prev)
	{
		std::cout << "node argument constructor" << std::endl;
	}
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
};
list::list()
	:m_head(0),m_tail(0),m_count(0){}

void list::push_back(int b_d)
{
	node* tmp = new node(b_d, 0, m_tail);
	if(!m_count)
	{
		m_head = tmp;
	}
	else
	{
	    m_tail->m_next=tmp;
	}
	m_tail=tmp;
	++m_count;
	std::cout<<"push_back "<<b_d<<std::endl;
}
void list:: push_front(int f_d)
{
	node *tmp = new node(f_d, m_head, 0);
	if(!m_count)
	{
		m_tail = tmp;
	}
	else
	{
	    m_head->m_prev=tmp;
	}
	m_head=tmp;
	++m_count;
	std::cout<<"push_front "<<f_d<<std::endl;
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
	std::cout<<"insert "<<i_d<<std::endl;
}
size_t list::size()
{
    std::cout<<"size is "<<m_count<<std::endl;
	return m_count;
}
bool list::empty()
{
    std::cout<<"empty "<<(m_count==0)<<std::endl;
	return m_count == 0;
}
void list::pop_back()
{
	if(empty())
	{
		return;
	}
	std::cout<<"pop_back "<<m_tail->m_data<<std::endl;
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
	    std::cout<<"pop_front "<<m_head->m_data<<std::endl;
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
}
node* list::get(size_t pos)
{
	node *ptr = m_head;
	if(pos>m_count) return 0;

	for(size_t j = 0; j < pos; ++j)
	{
		ptr = ptr->m_next;
	}
	std::cout<<"geting..OUT! :) "<<ptr->m_data<<std::endl;
	return ptr;
}

int main()
{
	list my_list;

	my_list.push_back(11);
	my_list.push_back(12);

	my_list.push_front(58);
	my_list.push_front(59);

	my_list.insert(17,my_list.get(2));
	my_list.insert(18,my_list.get(3));

	for(int i=0;i<6;++i){
        my_list.get(i);
	}
59,58,11,17,18,12


  return 0;
}
