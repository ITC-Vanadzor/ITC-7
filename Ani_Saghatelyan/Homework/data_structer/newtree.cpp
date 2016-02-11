#include <iostream>
#include <queue>

struct node
{
        int value;      
        node *left;    
        node *right;  
	node(int val)
        : value(val)
	, left(NULL)
	, right(NULL)
	{
        };
};

void PrintLayer(node* root)
{
  if (root == NULL)
  {
	 return;
  }
  std::queue<node*> layers;
  layers.push(root);
  while (!layers.empty())
  {
	    node* current = layers.front();
   	    layers.pop();
     	    std::cout<<current->value<<" ";
	    if(current->left)
	    {
     		 layers.push(current->left);
            }
	    if(current->right)	
	    {
     		 layers.push(current->right);
            }
  }
}

int Min(node* root)
{
	node* current = root;
	while(current->left)
	{
		current = current->left;
	}
	return current->value;
}


int Max(node* root)
{
	node* current = root;
	while(current->right)
	{
		current = current->right;
	}
	return current->value;
}




bool isBST(node* root)
{
        std::queue<int> q;
        if (root != NULL) 
	{ 
	  isBST(root->left);
          q.push(root->value);   
          isBST(root->right);   
        }
	while(!q.empty())
	{
	    int current=q.front();
	    q.pop();
	    if(current < q.front())
	    {
		return false;
	    }
	}    
    return true;
}

void Print(node *root)
{
        if (root != NULL) 
	{ 
           Print(root->left);   
           std:: cout << root->value << " ";   
           Print(root->right);   
        }
 
} 

bool Search(node* root, int value) 
{
        if (root == NULL)
	{
           return false;
        }
        else if (value == root->value) 
	{
          return true;
        }
        else if (value < root->value) 
	{
           return Search(root->left, value);
        }
         else 
	{
            return Search(root->right, value);
        }
} 

void Insert(node*& root, int val) 
{
        if ( root == NULL ) 
	{
             root = new node(val);
             return;
        }
        else if (val < root->value) 
	{
            Insert(root->left, val);
        }
        else
	{
             Insert(root->right, val);
        }
}
//incomplete
void  Delete(node*& root, int val)
{
	if(root == NULL)
	{
		return;
	}
	else if(root->value < val)
	{
		Delete(root->right, val);
	}
	else if(root->value > val)
	{
		Delete(root->left, val);
	}

        else	if(root->value == val)
  	{
		if(root->left == NULL && root->right == NULL)
		{
			delete root;
			root = NULL;
		}
		else if(root->left == NULL && root->right != NULL)
		{
			Delete(root->right, val);
		}
		else if(root->left != NULL && root->right == NULL)
		{
			Delete(root->left,val);	
		}
		else if(root->left != NULL &&  root->right != NULL)
		{
			node* currentRoot = root;
			root = root->right;
				while(root->left)
				{
					root = root->left;
				}
			currentRoot->value = root->value;
			Delete(root, root->value);
			delete root;
			root = NULL;
		}
        }

}




int main()
{
      node *root;  
      root = NULL;     
      Insert(root,2);
      Insert(root,5);
      Insert(root, 7);
      Insert(root,3);
      Insert(root,8);
      Insert(root, 9);
      std::cout<<"Print\t";
      Print(root);
      std::cout<<"\nPrint Layer\t";
      PrintLayer(root);
      std::cout<<"\nSearched value is "<<Search(root,5)<<std::endl;
      std::cout<<"max : "<<Max(root)<<" min : "<<Min(root)<<std::endl;
      std::cout<<" BST :"<<isBST(root);
      return 0;
}
