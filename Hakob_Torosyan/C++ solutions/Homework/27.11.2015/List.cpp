#include <iostream>
//#include <cstdlib>

struct node
{
	node* next;
	node* prev;
	size_t data;

	node(size_t data,node* next, node* prev)
	:next(next), prev(prev), data(data)
	{};

	~node()
	{
	delete next;
	delete prev;
	next = 0;
	prev = 0;
	};
};

struct list
{
	node* head;
 	node* tail;
 	size_t count;
	list()
	:head(0), tail(0),count(0)
 	{
 	};
 	~list()
	{
	/*while(head != 0)
	{
		tail = head->next;
		delete head;
		head = tail;	
	}*/
	//delete head;
};


	 void push_back(int a)
 	{
 	 node* new_node = new node(a,0,tail);
  
 	 if (count)
  	{
		tail->next = new_node;
  	      new_node->prev = tail;
  	}
  	else
 	 {
  		 head = new_node;
 	 }
  	tail=new_node;
  	++count;
	std::cout << "Push_back " << a << std::endl;
 	};

 	void push_front(int a)
	{
 		 node* new_node = new node(a,head,0);
 	 	new_node->data = a;
 		 if (count)
  			{
			head->prev = new_node;
       			new_node->next = head;
			}
 		 else
  			{
  			tail = new_node;
  			}
  		head=new_node;
  		++count;
		std::cout << "Push_front " << a << std::endl;
 	};
 	void insert(int a, node* b)
	{
		if(b == tail)
		{
			push_back(a);
		}
		else
		{
		node* temp = new node(a,b->next,b);
		temp->next->prev = temp; 		
	    	b->next = temp;
		++count;
		  
		}
	};
	 size_t size()
	{
		std::cout << "Size of list is " << count << std::endl;
		return count;	
	};
	 bool empty()
	{
		return count == 0;
	};
	 void pop_back()
	{
		if(empty())
		{
			return;
		}
		std::cout << "Pop_back " << tail->data << std::endl;
		if(count == 1)
		{
			//delete head;
			tail = 0;
			head = 0;	
		}
		else 
		{
			tail = tail->prev;
			//delete tail->next;
			tail->next = 0; 	
		}
		--count;
	};
 	void pop_front()
	{
		if(empty())
		{
			return;
		}
		if(count == 1)
		{
			//delete head;
			tail = 0;
			head = 0;			
		}	
		else
		{
			head = head -> next;
			//delete head -> prev;
			head -> prev = 0;	
		}
		--count;
	};
	 void remove (node* a)
	{
		if(a == tail)
		{
			pop_back();	
		}
		if(a == head)
		{
			pop_front();
		}
		else
		{
			a->prev->next = a->next;
			a->next->prev = a->prev->next;
			//delete a;
			//a = 0;
			
		}	
	};
	 node* get(size_t a)
	{
		if(a > count)
		{
			return 0;
		}
		node* temp = head;
		for(size_t i = 1; i < a; ++i)
		{
			temp = temp->next;	
		}
		std::cout << "Get list " << temp->data << std::endl;
		return temp;
	};

};


int main()
{
	 list mylist;
	  mylist.push_back(14);
	  mylist.push_front(20);
	  mylist.push_back(15);
	  mylist.push_front(140);
	  //mylist.insert(10,mylist.get(11));
	  mylist.pop_back();
	  mylist.pop_front();
	  //mylist.remove(mylist.get(2));
          //mylist.remove(mylist.get(3));
	  /*mylist.push_front(555);*/
	  size_t count=mylist.size();
	  for(size_t i=0;i<count;i++) {
	     mylist.get(i);
	  }
	
  	return 0;
}

