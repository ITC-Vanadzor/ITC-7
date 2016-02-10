#include <iostream>
#include <vector>


struct Node{
	int m_data;
	Node *m_left;
	Node *m_right;
	Node *m_parent;
	
	Node(int data,Node *parent):m_data(data),m_left(NULL),m_right(NULL),m_parent(parent){}
};


struct Tree{
	Node *m_root;

	Tree(int);
	~Tree(){ del(m_root); }
	void insert(int,Node *);
	void print();
	void getdata(Node *,std::vector<int>*);
	Node *find(int);
	Node *find(int,Node*);
	void del(Node*);
	void remove(int);
};


Tree::Tree(int data){
	m_root=new Node(data,NULL);
}

void Tree::insert(int data,Node *current=NULL){
	if(current==NULL){
		current=m_root;
	}
	if(current->m_data<=data){
		if( current->m_right==NULL){
			current->m_right=new Node(data,current);
		}
		else{
			insert(data,current->m_right);
		}
	}
	else if(current->m_data>data){
		if(current->m_left==NULL){
			current->m_left=new Node(data,current);
		}
		else{
			insert(data,current->m_left);
		}
	}
}

void Tree::print(){
	std::vector<int> tmp;
	getdata(m_root,&tmp);
	for(int i=0;i<tmp.size();++i){
		std::cout<<tmp[i]<<' ';
	}
	std::cout<<std::endl;
}	

void Tree::getdata(Node *current,std::vector<int> *str){
	if(current==NULL){
		return;
	}
	getdata(current->m_left, str);	
	str->push_back(current->m_data);
	getdata(current->m_right,str);

}
void Tree::del(Node *current){
	if(current==NULL){
		return;
	}
	
	del(current->m_left);
	del(current->m_right);	
	delete current;
}

void Tree::remove(int data){
	
	Node *tmp=find(data);
	if(tmp==NULL){
		return;
	}
	
	std::vector<int> tmp_str1;
	std::vector<int> tmp_str2;
	getdata(tmp->m_left,&tmp_str1);
	getdata(tmp->m_right,&tmp_str2);
	
	if(tmp->m_parent!=NULL){
		if(tmp->m_parent->m_left==tmp){
			tmp->m_parent->m_left=NULL;
		}
		else{
			tmp->m_parent->m_right=NULL;
		}
	}
	
	del(tmp);
	for(int i=0;i<tmp_str1.size();++i){
		insert(tmp_str1[i]);
	}
	for(int i=0;i<tmp_str2.size();++i){
		insert(tmp_str2[i]);
	}
}
	
Node *Tree::find(int data){
	return find(data,m_root);
}

Node *Tree::find(int data,Node *current){
	
	if(current==NULL){
		return NULL;
	}

	if(current->m_data==data){
		return current;
	}
	else if(current->m_data<data){
		return find(data,current->m_right);
	}
	else{
		return find(data,current->m_left);
	}

}

int main(){
	Tree bin_tree(23);
	
	bin_tree.insert(21);
	bin_tree.insert(16);
	bin_tree.insert(81);
	bin_tree.insert(85);
	bin_tree.insert(29);
	bin_tree.insert(1);
	bin_tree.insert(15);

	bin_tree.print();
	bin_tree.remove(85);
	bin_tree.print();
	bin_tree.remove(23);
	bin_tree.print();
	
	return 0;
}
	
