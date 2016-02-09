#include <iostream>

struct node
{

	int value;
	node* left;
	node* right;
};

struct tree
{
	node* root;
	tree();
	~tree();
	void   Print(node* root);
	void   Insert(node* root, int value);
	void   Delete(node* root, int value);
	node*  Search( node* root ,int value);
	void DeleteTree(node* root);
};

tree::tree()
:root(NULL)
{
	std::cout<<"Constructor of tree\n";
}

void tree::DeleteTree(node* root)
{
	
	if(root!=NULL)
 	 {
    		DeleteTree(root->left);
   	        DeleteTree(root->right);
   	        delete root;
         }
	
}
tree::~tree()
{
	DeleteTree(root);
	std::cout<<"Destructor of tree\n";
}


void tree::Print(node* root)
{
	std::cout<<"Print\t";
	if(root==NULL)
	{
		std::cout<<"NULL\n";
		return;
	}
	else
	{	
		Print(root->left);
		std::cout<<root<<" ";
		Print(root->right);		
	}
}
	
void tree::Insert( node* root, int value)
{
	std::cout<<"insert\t";
	if (root==NULL)
	{
		root=new node;
		root->value=value;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		if(root->value < value)
		{
			Insert(root->right,value);
		}
		else if(root->value >= value)
		{
			Insert(root->left, value);
		}
	}
		
}

node* tree::Search( node* root, int value)
{
	if (root==NULL)
	{
		return NULL ;
	}
	else
	{
		if(root->value==value)
		{
			return root;
		}
		else if(root->value < value)
		{
			Search(root->right,value);
		}
		else if(root->value >= value)
		{
			Search(root->left, value);
		}
	}
	
}
void tree::Delete(node* root, int value)
{
	node* member=Search(root, value);
	if(member->left==NULL && member->right==NULL)
	{
		member=NULL;
		delete member;
	}	
	else if(member->left==NULL || member->right==NULL)
	{
		if(member->left==NULL)
		{
			member=member->right;
			
		}
		else
		{
			member=member->left;
		}
	}

	else if(member->left!=NULL && member->right->right!=NULL)
	{
		member->value=member->left->value;
		member=member->left->left;

	}

}
int  main()
{

	tree  A;
	A.Insert(A.root, 2);
//	A.Insert(A.root, 3);
//	A.Insert(A.root,9);
//	A.Print(A.root);
	return 0;	

}
