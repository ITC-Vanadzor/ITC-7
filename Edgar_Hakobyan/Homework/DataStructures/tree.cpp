#include <iostream>
#include <vector>

struct node
{
	int data;
	node* left;
	node* right;
	node(int d,node* l,node*r)
	:data(d)
	,left(l)
	,right(r)
	{}
};

void insert(node* &root,int x)
{
	if (root == NULL)
	{
		root = new node(x,NULL,NULL);
		return;
	}
	
	if ( x < root->data )
	{
		if (root->left == NULL)
		{
			root->left = new node(x,NULL,NULL);
		}
		else
		{
			insert(root->left,x);
		}
	}
	else if ( x > root->data )
	{
		if(root->right == NULL)
		{
			root->right = new node(x,NULL,NULL);
		}
		else
		{
			insert(root->right,x);
		}
	}
	else
	{
		std::cout << "aydpisi tvyal arden ka" << std::endl;
	}
}

int find(node* &root,int x)
{
	if (x == root->data)
	{
		return x;
	}
	else if( x < root->data)
	{
		return find(root->left,x);
	}
	else
	{
		return find(root->right,x);
	}
}

void del(node* &root, int x)
{
	if (x == root->data)
    {
       	if(root->left == NULL && root->right == NULL)
		{
			delete root;
			root = NULL;
		}
		if(root->left != NULL && root->right == NULL)
		{
			root = root->left;
		}
		if(root->left == NULL && root->right != NULL)
        {
            root = root->right;	
        }
    }
    else if( x < root->data)
    {
        del(root->left,x);
    }
    else
    {
        del(root->right,x);
    }
}

void print(node* root)
{
    if (root == NULL) return;
   	print(root->left);
    std::cout << root->data << std::endl;
    print(root->right);
}

void binary(node* root)
{
	std::vector<int> x;
	if (root == NULL) return;
    binary(root->left);
    x.push_back(root->data);
    binary(root->right);
	for(int i = 0; i < x.size()-1; ++i)
	{
		if(x[i] > x[i+1])
		{
			std::cout << "no binary" << std::endl;
			return;
		}
	}
	std::cout << "binary" << std::endl;
}

int main()
{
	node* r;
	insert(r,5);
	insert(r,2);
	insert(r,6);
	insert(r,8);
	binary(r);
	print(r);
	del(r,6);
	print(r);
	return 0;
}
