#include <iostream>
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
	 if(x > tree->data) {
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
		if(tree == NULL) {
			return tree;
		}
		if(element < tree->data) {
			tree->left = del_element(element,tree->left);
		}
		else if(element > tree->data) {
			tree->right = del_element(element,tree->right);
			}
		else if(tree->left != NULL && tree->right != NULL) {
			tree->data = tree->right->data;
			tree->right = del_element(tree->right->data,tree->right);
			}
		else {
			if(tree->left !=NULL) {
				tree = tree->left;
		    	 }
		     	 else 	tree = tree->right;
		}
		return tree;
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
int main() {
	const int justnumber=8;
	node* tree = NULL;
	for(int i=0;i<justnumber;i++) {
		insert(i,tree);
	} 
	tree=del_element(5,tree);
	print(tree);
	std::cout << find_element(5,tree) << std::endl;
	full_del(tree);
	return 0;
}
