#include <iostream>
#include <queue>
#include <algorithm> 


struct node {
    int data;
    node* left;
    node* right;
    node(int a)
    :data(a), left(NULL), right(NULL) {
	std::cout << "Created node  " << a << std::endl;
    }
    
};

void insert(node* &n, int a) {
    if (n==NULL) {
	node* new_node = new node(a);
	n=new_node;
	return;
    }
    if (n->data < a) {
        insert (n->right, a);
    } else {
        insert(n->left, a);
    }
}

void print (node* n) {
    if (n == NULL) {
	return;
    }
    print (n->left);
    std::cout << n->data << std::endl;
    print (n->right);
}

void print_levels(node* n) {
    if ( n==NULL) {
	return;
    }
    std::queue<node*> current_level;
    std::queue<node*> next_level;
    current_level.push(n);
    while (! current_level.empty()) {
	node* tmp = current_level.front();
	current_level.pop();
	if (tmp != NULL) {
	    std::cout << tmp->data << "  ";
	    next_level.push(tmp->left);
	    next_level.push(tmp->right);
	}
	if (current_level.empty()) {
	    std::cout << std::endl;
	    swap(current_level, next_level);
	}
    }
}


node* find(node* n, int a) {
    if (n == NULL) {
	std::cout << "not found  " << a << std::endl;
	return NULL;
    }
    if (n->data == a) {
	std::cout << "found  " << a << std::endl;
	return n;
    }
    if (n->data < a) {
	return find (n->right, a);
    } else {
	return find(n->left, a);
    }
}

node* maximum(node* n) {
    if (n->right == NULL) {
	return n;
    }
    return maximum(n->right);
}

node* minimum(node* n) {
    if (n->left == NULL) {
	return n;
    }
    return minimum(n->left);
}

bool verify(node* n) {
    if ( n==NULL) {
	return true;
    }
    node* min = minimum(n);
    node* max = maximum(n);
    if (n->data < min->data || n->data > max->data) {
	return false;
    }
	return verify(n->left);
	return verify(n->right);
}

//incorrect
void remove(node* &n, int a) {
    if (n == NULL) {
	return;
    }
    node* tmp = NULL;
    if (n->data == a) {
	if (n->left == NULL  && n->right == NULL) {
	    n=NULL;
	    delete n;
	    return;
	}
	if (n->left == NULL) {
	    if (n->right != NULL) {
	        tmp = minimum(n->right);
		std::swap (n->data, tmp->data);
		remove (tmp, tmp->data);
	    }
	} else {
	        tmp = maximum(n->left);
		std::swap(n->data, tmp->data);
		remove (tmp, tmp->data);
	}
    } else {
	tmp = find(n, a);
	remove (tmp, a);
    }
}


int main () {
    node* root = NULL;
    
    insert(root, 10);
    insert(root, 6);
    insert(root, 4);
    insert(root, 15);
    insert(root, 5);
    insert(root, 13);
    
    std::cout << "Print tree /ordinary/ " << std::endl;
    print(root);
    std::cout << "Print tree /by levels/ " << std::endl;
    print_levels(root);
    
    find(root, 4);
    find(root, 11);
    
    if ( verify(root) ) {
	std::cout << "This is a binary search tree" <<std::endl;
    } else {
	std::cout << "This is not a binary search tree" << std::endl;
    }
    
    remove(root, 4);
    print (root);
    return 0;
}
