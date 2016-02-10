#include <iostream>

struct node
{
    int m_data;
    node* m_right;
    node* m_left;
    node(int data, node* right, node* left)
    :m_right(right)
    ,m_left(left)
    ,m_data(data)
    {}
};
struct tree
{
    void insert(node* &root, int num);
    void delette(node* root, int num);
    void find(node* root, int num);
    void print(node* root);
};
void tree::insert(node* &root, int num)
{
    if(root == NULL)
    {
	root = new node(num, 0, 0);
	return;
    }
    else if(num == root->m_data)
    {
	std::cout << "\nyou can't insert because the tree has that mnumber ( for insert )";
    }
    else if(num > root->m_data)
    {
	insert(root->m_right, num);
    }
    else if(num < root->m_data)
    {
	insert(root->m_left, num);
    }
}
void tree::delette(node* root, int num)
{
    if(root == NULL)
    {
	std::cout << "\nyou can't delete any members because the tree is empty ( for delete )";
	return;
    }
    else if(num == root->m_data)
    {
	delete root;
	root = root->m_left;
	std::cout << "\nthe object had deleted ( for delete )";
    }
    else if(num > root->m_data)
    {
	if(root->m_right == NULL)
	{
	    std::cout << "\nthere are not a member equal the inputed number ( for delete )";
	    return;
	}
	else
	{
	    delette(root->m_right, num);
	}
    }
    else if(num < root->m_data)
    {
	if(root->m_left == NULL)
	{
	    std::cout << "\nthere are not a member equal the inputed number( for delete )";
	    return;
	}
	else
	{
	    delette(root->m_left, num);
	}
    }
}
void tree::find(node* root, int num)
{
    if(root == NULL)
    {
	std::cout << "\nthe tree is empty ( for find )";
    }
    else if(num == root->m_data)
    {
	std::cout << "\nthe inputed number is: " << num;
	std::cout << "\nthe object has founded, it is: " << root->m_data;
	return;
    }
    else if(num > root->m_data)
    {
	if(root->m_right == NULL)
	{
	    std::cout << "\nthere are not a member equal the inputed number ( for find )";
	    return;
	}
	else
	{
	    find(root->m_right, num);
	}
    }
    else if(num < root->m_data)
    {
	if(root->m_left == NULL)
	{
	    std::cout << "\nthere are not a member equal the inputed number ( for find )";
	    return;
	}
	else
	{
	    find(root->m_left, num);
	}
    }

}
void tree::print(node* root)
{
    if(root != NULL)    
    {
	print(root->m_left);
	std::cout << root->m_data;
	print(root->m_right);
    }
}

int main()
{
    node* root = NULL;
    tree a;
    a.print(root);
    a.insert(root, 5);
    a.insert(root, 8);
    a.insert(root, 3);
    a.insert(root, -9);
    a.print(root);
    a.delette(root, 3);
    a.delette(root, 15);
    a.find(root, 8);
    a.find(root, 36);
    a.print(root);
  
  return 0;
}
