#include <iostream>
#include <cassert>
# include <cstdlib>

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
		//std::cout <<this<< "Node Constructor with 3 arguments\n";	
	}
    
        ~node()
       {
              
              delete m_next;
	      m_next=0;
             // std::cout<<this<<" Node Destructor \n";
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
        void Print(); 
        ~list()
	{       
                 
		delete m_head;
		m_head=0;
		m_tail=0;
	       // std::cout<<this<<"list Destructor\n";
	}
};

list::list()
	:m_head(0)
	,m_tail(0)
	,m_count(0)
{
	//std::cout <<this<< "List Constructor with 3 arguments\n";
}

void list::push_back(int b_d)// add from back
{
	m_tail = new node(b_d, NULL, m_tail);
        
	if(!m_count)
	{
		m_head = m_tail;
	}
        else
        {
		m_tail->m_prev->m_next=m_tail;
        }
	++m_count;
	
}
void list:: push_front(int f_d)// add from first
{
	m_head = new node(f_d, m_head, 0);
	if(!m_count)
	{
		m_tail = m_head;
	}
	++m_count;
}
void list::insert(int i_d, node* i_p)// insert  that element after that node  
{
        if(i_p->m_next==NULL)
        {
         	std::cout<<"Error... The size, you entered  is big\n";
                return;
        }
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
size_t list::size()// returns the size of lists
{       
	//std::cout<<"The size is\t "<<m_count<<std::endl;
	return m_count;
}
bool list::empty()// if the list is empty, return true
{
        
    return m_count == 0;
}
void list::pop_back()// delete from back
{
	if(!m_count)
	{
		std::cout<<" The list is empyty\n";
		return;
	}
	if(m_count== 1)
	{
		assert(m_tail == m_head);
		delete m_tail;
		m_tail = 0;
		m_head = 0;
                std::cout<<"Now the list is empty\n";
 		
                
	}
	else
	{
		m_tail = m_tail->m_prev;
		delete m_tail ->m_next;
		m_tail ->m_next = 0;
	}
	--m_count;
}
void list::pop_front()// delete from front
{
	if(empty() || m_count == 1)
	{
		pop_back();
	}
	else
	{       m_head->m_next->m_prev=0;
                m_head=m_head->m_next;
                delete m_head ->m_prev;
                
		--m_count;
            

	}
}
void list::remove(node* r_p)// delete  after  this element
{
        if(!size())
        {
		std::cout<<"The list is empty, You can't delete from there anything\n";
                return;
	} 
        if(r_p->m_next==0)
        {
		std::cout<<"There is not any element after this\n";
                return;
        }
        
	if(r_p->m_next->m_next == 0)
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
node* list::get(size_t pos) // gets the node*  from that  position
{
     if(empty())
     { 
       	   //std::cout<<"As the list is empty,, you can't get  the node from list\n";
	   return 0;
     }
     if(pos==0)
     {
     	   return m_head;
     }
     if(pos==size())
     {
     	  return m_tail;
     } 
     if(pos>size())
     {
         std::cout<<" The  position is more than the size of list\n";
         std::exit(1);   
     }  
     else
     {     
	node *ptr = m_head;
	for(size_t j = 1; j <=pos; ++j)
	{      if(j!=pos)
              {
		ptr = ptr->m_next;
              }
	}
        //std::cout<<" The node is\t"<<ptr->m_data<<std::endl;
        return ptr;
     }
}

void list::Print()// prints the list
{
    
        {
                 node *current=m_head;
		for(size_t i=0; i<m_count; ++i)
		{  
			std::cout<<current->m_data<<"\t";
                       if(i!=m_count-1)
                       {
                        current=current->m_next;
                       }
                }
            std::cout<<std::endl;		
       } 
}

int main()
{

   list newList;
   newList.push_front(5);// 5
   newList.push_back(6);// 5 6
   newList.push_front(4);// 4 5 6  
   newList.push_back(7);// 4 5 6 7
   newList.Print();
   newList.pop_front();// 5 6 7
   newList.push_front(3);// 3  5 6 7
   newList.Print();
   newList.push_front(2);// 2 3 5 6 7
   newList.Print();
   newList.push_front(1);// 1 2 3 5 6 7
   newList.Print();   
   newList.insert(9,newList.get(4));// 1 2 3 9 5 6 7
   newList.Print();
   newList.insert(8,newList.get(5)); //1 2 3 9 8 5 6 7
   newList.Print();
   //newList.insert(0,newList.get(10));// error and exit, as there isn't node element in 10-th position
   //newList.Print();
   newList.remove(newList.get(0)); //1 2 3 4  9 8 5 6 
   newList.Print();
 
   
 

   
	

  return 0;
}
