#include <iostream>

struct node
{
	int data;
	node* left;
	node* right;
	node(int d)
	:data(d)
	,left(NULL)
	,right(NULL)
	{}
};

struct tree
{
	node* root;
	tree();
	void insert(node* root,int x);
//	void del(node* root,int x);
//	void find(node* root, int x);
	void print(node* root);
	~tree();
}; 

tree::tree()
	:root(NULL)
{}

void tree::insert(node* root,int x)
{
	if (NULL == root)
	{
		root = new node(x);
	//	root->data = x;
	//	root->left = NULL;
	//	root->right = NULL;
	}
	
	if ( x < root->data )
	{
		if (root->left == NULL)
		{
			root->left = new node(x);
		//	root->left->left = NULL;
		//	root->left->right = NULL;
		}
		else
		{
			insert(root->left,x);
		}
	}
	else
	{
		if(root->right == NULL)
		{
			root->right = new node(x);
	//		root->right->right = NULL;
	//		root->right->left = NULL;
		}
		else
		{
			insert(root->right,x);
		}
	}
}

void tree::print(node* root)
{
    if (root == NULL) return;
   	print(root->left);
    std::cout << root->data << std::endl;
    print(root->right);
}


int main()
{
	tree* r;
	r.insert(r,5);
	r.insert(r,2);
	r.print(r);
	return 0;
}
