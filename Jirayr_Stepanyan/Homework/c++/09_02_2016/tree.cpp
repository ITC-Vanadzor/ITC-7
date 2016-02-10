#include <iostream>
#include <vector>

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
    void delete_object(node* root, int num);
    void find(node* root, int num);
    void print(node* root);
    void print_strip(node* root);
};
void tree::insert(node* &root, int num)
{
    if(root == NULL)
    {
	root = new node(num, NULL, NULL);
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
void tree::delete_object(node* root, int num)
{
    static node* tmp_root = NULL;
    static int left_or_right = 0;;
    if(num == root->m_left->m_data)
    {
	tmp_root = root;
	left_or_right = 0;
    }
    if(num == root->m_right->m_data)
    {
	tmp_root = root;
	left_or_right = 1;
    }
    if(root == NULL)
    {
	std::cout << "\nyou can't delete any members because the tree is empty ( for delete )";
	return;
    }
    else if(num == root->m_data)
    {
	node* tmp = NULL;
	root = root->m_left;
	while(root->m_right != NULL)
	{
	    tmp = root;
	    root = root->m_right;
	}
	tmp->m_right = root->m_left;
	if(left_or_right)
	{
	    root->m_right = tmp_root->m_right->m_right;
	    root->m_left = tmp_root->m_right->m_left;
	    delete tmp_root->m_right;
	    tmp_root->m_right = root;
	}
	else
	{
	    root->m_right = tmp_root->m_left->m_right;
	    root->m_left = tmp_root->m_left->m_left;
	    delete tmp_root->m_left;
	    tmp_root->m_left = root;
	}
	std::cout << "\nthe object had deleted ( for delete )";
	return;
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
	    delete_object(root->m_right, num);
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
	    delete_object(root->m_left, num);
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
    static std::vector<int> for_found;
    static int one_time = 0;
    if(root == NULL)    
    {
	return;
    }
    else
    {
	print(root->m_left);
	std::cout << root->m_data;
	for_found.push_back(root->m_data);
	print(root->m_right);
    }
    if(one_time == 0)
    {
	for(int i = 1; i < for_found.size(); ++i)
	{
	    if(for_found[i - 1] > for_found[i])
	    {
		std::cout << "\n our tree is NOT for found";
		++one_time;
	    }
	    else
	    {
		std::cout << "\n our tree is for found";
		++one_time;
	    }
	}
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
    a.delete_object(root, 3);
    a.delete_object(root, 15);
    a.find(root, 8);
    a.find(root, 36);
    a.print(root);
  
  return 0;
}
