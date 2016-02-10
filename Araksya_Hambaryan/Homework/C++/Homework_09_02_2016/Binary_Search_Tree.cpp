#include <iostream>

// incomplete

struct node {
    int data;
    node* left;
    node* right;
    node(int a)
    :data(a), left(NULL), right(NULL) {
	std::cout << "Created node  " << a << std::endl;
    }
};

struct tree {
    node* root;
    tree()
    : root(NULL) {
	std::cout << "Created tree" << std::endl;
    }
    void print(node* n);
    void insert(node* n, int a );
    void remove(node* n, int a);
    node* find(node* n, int a);
};
void tree::print (node* n) {
    std::cout << "print" << std::endl;
    if (root == NULL) {
	return;
    }
    print (n->left);
    std::cout << n->data << std::endl;
    print (n->right);
}

node* tree::find(node* n, int a) {
    if (n == NULL) {
	std::cout << "not found  " << a << std::endl;
	return 0;
    }
    if (n->data == a) {
	std::cout << "found  " << a << std::endl;
	return n;
    }
    if (n->data < a) {
	find (n->right, a);
    } else {
	find(n->left, a);
    }
}

void tree::insert(node* n, int a) {
    node* new_node = new node(a);
    if (n==NULL) {
	root=new_node;
	return;
    }
    if (n->data < a) {
        insert (n->right, a);
    } else {
        insert(n->left, a);
    }
}

void tree::remove(node* n, int a) {
    if (n == NULL) {
	return;
    }
    node* tmp = find(n, a);
    if (tmp->right == NULL && tmp->left ==NULL) {
	delete tmp;
    }
	delete tmp;
}

int main () {
    tree my_tree;
    std::cout << "root " << my_tree.root->data << std::endl;
    my_tree.insert(my_tree.root, 5);
    std::cout << "root " << my_tree.root->data << std::endl;
    my_tree.insert(my_tree.root, 7);
    my_tree.insert(my_tree.root, 3);
    std::cout << "root " << my_tree.root->data << std::endl;
    my_tree.insert(my_tree.root, 4);
    std::cout << "root " << my_tree.root->data << std::endl;
    
    my_tree.find(my_tree.root, 3);
    my_tree.print(my_tree.root);
  //  my_tree.remove(4);

    return 0;
}
