#include <iostream>
#include <stack>
#include <queue>
struct node {
	int data;
	node* left;
	node* right;
};
void print(node* tree) {
	if(tree ==NULL)  return;
	else {
		print(tree->left);
		std::cout << tree->data << std::endl;
		print(tree->right);
	}
}
void insert(int x,node* &tree) {
	if(tree == NULL) {
		tree = new node;
		tree->data = x;
		tree->left=tree->right=NULL;
		return;
	}
	 if(x >= tree->data) {
		if(tree->right != NULL) {
				insert(x,tree->right);
		}
		else {
			tree->right = new node;
			tree->right->data = x;
			tree->right->left=tree->right->right=NULL;
		}
	}
	if(x < tree->data) {
		if(tree->left !=NULL) {
			insert(x,tree->left);
		}
		else {
			tree->left = new node;
			tree->left->data = x;
			tree->left->right=tree->left->left=NULL;
		}
	}
 }
node* del_element(int element,node* tree) {
		//ete hasel enq nran,vor tree=NULL,uremn ayd elementov node cari mej chka
		if(tree == NULL) {
			return tree;
		}
		if(element < tree->data) {
			tree->left = del_element(element,tree->left);
			return tree;
		}
		else if(element > tree->data) {
			tree->right = del_element(element,tree->right);
			return tree;
			}
		else if(tree->left == NULL && tree->right == NULL) {
			delete tree;
			return 0;
			}
		else {
			if(tree->left ==NULL) {
				node* right_tree= tree->right;
				*tree=*right_tree;
				right_tree->left = 0;
				right_tree->right = 0;
				delete right_tree;
		    	 }
		     	 else {
				//c-n dzax chuxi amenaaji node-n e
				node* c= tree->left;
				// parent-dzax chuxi amenaaji cnoxn e
				node *parent = tree->left;
				while(c->right) {
					parent=c;
					c=c->right;
				}
				parent->right=c->left;
				c->left = NULL;
				tree->data = c->data;
				delete c;
			}
			return tree;
		}
}

bool find_element(int element,node* tree) {
	if(tree == NULL) {
		std::cout << "element chka" << std::endl;
		return false;
	}
	else if(tree->data == element) 
		return true;
	else if(element < tree->data)
		find_element(element,tree->left);
	else if(element > tree->data)
		find_element(element,tree->right);
}		
void full_del(node* tree) {
	if(tree != NULL) {
		full_del(tree->right);
		full_del(tree->left);
		delete tree;
		tree = NULL;
	}
}
int minimum(node* tree) {
	if(tree->left == NULL) {
		return tree->data;
	}
	return minimum(tree->left);
}
int maximum(node* tree) {
	if(tree->right == NULL) {
		return tree->data;
	}
	return maximum(tree->right);
}
bool verify(node* tree) {
	if(tree == NULL) {
		return true;
	}
	
	if((minimum(tree) < tree->data) && (maximum(tree) > tree->data)) 
	
		return verify(tree->right) && verify(tree->left);
	
	return false;
}
void no_binary_insert(int x,node* no_tree) {
	no_tree->data=x;
}

int main() {
	const int justnumber=8;
	node* tree = NULL;
	node* no_tree=new node;
	no_binary_insert(10,no_tree);
	no_binary_insert(15,no_tree);
	no_binary_insert(25,no_tree);
	no_binary_insert(40,no_tree);
	no_binary_insert(30,no_tree);
	no_binary_insert(11,no_tree);
	for(int i=0;i<justnumber;i++) {
		insert(i,tree);
	}
	insert(5,tree); 
	tree=del_element(5,tree);
	print(tree);
	std::cout << "is binary " << verify(tree) << std::endl;
	std::cout << "MAX = " << maximum(tree) << " MIN= " << minimum(tree) << std::endl;
	std::cout << find_element(5,tree) << std::endl;
	full_del(tree);
	full_del(no_tree);
	return 0;
}
