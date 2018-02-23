#include <iostream>
#include <cstdlib>
#include <queue>
struct node {
	int data;
	node* right;
	node* left;
};
struct tree {
	node* root;
	
	// constructor
	tree() {
		root = NULL;
	}
	
	// destructor
	~tree() {
		deleteTree();
	}
	//======= Insert new node with nodeData to tree ========
	private: 
	void insertNode (int newData, node* branch) {
		if ( branch->data > newData) 
		{
			if (branch->left != NULL) {
				insertNode(newData, branch->left);
			}
			else {
				branch->left =new node;
				branch->left->data = newData;
				branch->left->right = NULL;
				branch->left->left  = NULL;
			}
		}
		else if (newData >= branch->data) {
			if (branch->right != NULL)
				insertNode(newData, branch->right);
			else {
				branch->right = new node;
				branch->right->data = newData;
				branch->right->left = NULL;
				branch->right->right = NULL;
			}
		} 		
	}

	// ========== Binary search in tree ================
	node* searchData (int data1, node* branch) {
		bool checkIfFind = false;
		if (branch != NULL) {
			if (branch->data == data1) {
				return branch;
			}
			else if (data1 > branch->data) {
				return (searchData(data1, branch->right));
			}
			else if (data1 < root->data) {
				return (searchData(data1, branch->left));
			}
			else if (branch->left == NULL && branch->right == NULL) {				std::cout<<"\nData was not found";
				return NULL;	
			}
			 
		}
		
	}
	

	// ================= Delete node =========
	 void deleteBranch (node* branch) {
		if (branch != NULL) {
			deleteBranch(branch->left);
			deleteBranch(branch->right);
			delete branch;
		}
	}
	
	public:
	// ================ Tree as queue ==========
	void treeToQueue(node* treeRoot, std::queue<int> &treeDatas) {
		if (treeRoot == NULL) {
			return;
		}
		else {
			treeToQueue(treeRoot->left, treeDatas);	
			//std::cout<<" "<<treeRoot->data;
			treeDatas.push(treeRoot->data);
			treeToQueue(treeRoot->right, treeDatas);
		}
	}

	// ================ Check whether tree is a binary search tree ======
	void verify (node* treeRoot) {
		int tmp;
		std::queue<int> treeQueue;
		treeToQueue(treeRoot, treeQueue);
		while (!treeQueue.empty()) {
			tmp = treeQueue.front();
			std::cout<<" "<<tmp;
			treeQueue.pop();
			if (tmp > treeQueue.front() && treeQueue.front()!=0)
			{
				std::cout<<"\nTree isn't binary search tree : "<<tmp<<" "<<treeQueue.front();
				return;
			}
	    	}
		std::cout<<"\nTreee is a binary search tree\n";	
	}
	
	// ===============  Public insert ========
	void insert(int newData) {
		if(root != NULL)
			insertNode (newData, root);
		else {
			root = new node;
			root->data = newData;
			root->left = NULL;
			root->right = NULL;
		}
	}
	
	// ============ Public search ============
	node* search (int data1)  {
		return searchData( data1, root);
	}

	// ============ Public detele tree ========
	void deleteTree () {
		deleteBranch(root);
	}
};

//============= Print function =============
void print (node* n) {
	if (n == NULL) {
		return;
	}
	else {
		print(n->left);
		std::cout<<" "<<n->data;
		print(n->right);
	}
};


// ========== Print level by level ========
void print_Tree(node * p,int level)
{
}

// =========== main function ===============
int main() {

tree myTree;
myTree.insert(13);
myTree.insert(5);
myTree.insert(23);
myTree.insert(44);
myTree.insert(1);

std::queue<int> datas;
myTree.verify(myTree.root);
//print(myTree.root);
//print_Tree(myTree.root, 1);
return 0;
}
