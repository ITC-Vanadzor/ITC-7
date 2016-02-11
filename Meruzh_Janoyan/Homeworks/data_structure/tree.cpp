#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>
struct Node{
	int m_data;
	Node *m_left;
	Node *m_right;

	Node(int data):m_data(data),m_left(NULL),m_right(NULL){}
};


struct Tree{
	Node *m_root;

	Tree(int);
	~Tree(){ del(m_root); }
	void insert(int,Node *);
	void print();
	void print(Node *);
	void print_by_level();
	Node *find(int);
	Node *find(int,Node*,Node**);
	void remove(int);
	void del(Node *);
	void test_to_search(Node *, int&,bool&);
	bool test_to_search();
};

void Tree::del(Node *current){
	if(current==NULL){
		return;
	}
	
	del(current->m_left);
	del(current->m_right);	
	delete current;
}

Tree::Tree(int data){
	m_root=new Node(data);
}

void Tree::insert(int data,Node *current=NULL){
	if(current==NULL){
		current=m_root;
	}
	if(current->m_data<data){
		if( current->m_right==NULL){
			current->m_right=new Node(data);
		}
		else{
			insert(data,current->m_right);
		}
	}
	else if(current->m_data>data){
		if(current->m_left==NULL){
			current->m_left=new Node(data);
		}
		else{
			insert(data,current->m_left);
		}
	}
}
void Tree::print(){
	print(m_root);
	std::cout<<std::endl;
}
bool Tree::test_to_search(){
	int prev=INT_MIN;
	bool result=true;
	test_to_search(m_root,prev,result);
	return result;
}
void Tree::test_to_search(Node *current,int &prev,bool &result){
	if(current==NULL){
		return;
	}
	test_to_search(current->m_left,prev,result);	
	if(double(current->m_data)-double(prev)<0){
		result=false;
		return;
	}
	prev=current->m_data;
		
	test_to_search(current->m_right,prev,result);
}

void Tree::print(Node *current){
	if(current==NULL){
		return;
	}
	print(current->m_left);	
	std::cout<<current->m_data<<' ';
	print(current->m_right);

}

void Tree::print_by_level(){
	std::deque<Node*> my_deque;
	
	my_deque.push_back(m_root);
	while(1){
	std::deque<Node*> *tmp_deque=new std::deque<Node*>;
	while(!my_deque.empty()){
		Node *tmp=my_deque[0];
		my_deque.pop_front();
		std::cout<<tmp->m_data<<' ';
		if(tmp->m_left){
			tmp_deque->push_back(tmp->m_left);
		}

		if(tmp->m_right){
			tmp_deque->push_back(tmp->m_right);
		}
	}
	std::cout<<std::endl;
	my_deque=*tmp_deque;
	delete tmp_deque;
	if(my_deque.empty()){
		return;
	}
	}	
}
void Tree::remove(int data){
	Node *parent=NULL;
	Node *del_obj=find(data,m_root,&parent);
	if(del_obj==NULL){
		return;
	}

	
	
	if(del_obj->m_left==NULL && del_obj->m_right==NULL){
		delete del_obj;
		if(parent && parent->m_left==del_obj){
			parent->m_left=NULL;
		}
		else if(parent && parent->m_right==del_obj){
			parent->m_right=NULL;
		}
		return;
	}

	
	if(del_obj->m_left==NULL){
		if(parent && parent->m_left==del_obj){
			parent->m_left=del_obj->m_right;
		}
		else if(parent && parent->m_right==del_obj){
			parent->m_right=del_obj->m_right;
		}
		delete del_obj;
		return;
	}
	

	if(del_obj->m_right==NULL){
		if(parent && parent->m_left==del_obj){
			parent->m_left=del_obj->m_left;
		}
		else if(parent && parent->m_right==del_obj){
			parent->m_right=del_obj->m_left;
		}
		delete del_obj;
		return;
	}
	

	Node *tmp=del_obj->m_right;
	Node *par_obj=del_obj;
	while(1){
		if(tmp->m_left==NULL){
			break;
		}
		par_obj=tmp;
		tmp=tmp->m_left;
	}
	
	if(parent==NULL){
		m_root=tmp;
	}
	else if(parent && parent->m_left==del_obj){
		parent->m_left=tmp;
	}
	else if(parent && parent->m_right==del_obj){
		parent->m_right=tmp;
	}
	
	
	if(par_obj->m_left==tmp){
		par_obj->m_left=tmp->m_right;
	}
	else if(par_obj->m_right==tmp)
	{
		par_obj->m_right=tmp->m_right;
	}
	
	tmp->m_left=del_obj->m_left;
	tmp->m_right=del_obj->m_right;
	delete del_obj;
	return;	
}
	
Node *Tree::find(int data){
	Node *parent;
	find(data,m_root,&parent);
}

Node *Tree::find(int data, Node *current, Node **parent){
	
	if(current==NULL){
		*parent=NULL;
		return NULL;
	}

	if(current->m_data==data){
		return current;
	}
	else if(current->m_data<data){
		*parent=current;
		return find(data,current->m_right,parent);
	}
	else{
		*parent=current;
		return find(data,current->m_left,parent);
	}

}

int main(){
	Tree bin_tree(23);
	bin_tree.insert(21);
	bin_tree.insert(16);
	bin_tree.insert(81);
	bin_tree.insert(71);
	bin_tree.insert(29);
	bin_tree.insert(1);
	bin_tree.insert(15);

	bin_tree.print();
	bin_tree.print_by_level();
	std::cout<<"IS SEARCH: "<<bin_tree.test_to_search()<<std::endl;
	
	return 0;
}
	
