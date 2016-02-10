#include <iostream>
#include <cstdlib>

struct treeNode {
	int data;
	treeNode* right;
	treeNode* left;
	
	// constructor
	treeNode(int rootData) {
		
		data = rootData;
		right = NULL;
		left = NULL;
	}
	~treeNode() {
		free(right);
		free(left);
		free(this);
	}
	//======= Insert new node with nodeData to tree ========
	void insertNode (int nodeData) {
		treeNode* tmpNode = (treeNode*) malloc(sizeof(treeNode));
		if ((left == NULL ) && (data > nodeData)) {
			left = tmpNode;
			left ->data = nodeData;
			return;
		}
		else if ((right== NULL ) && (data < nodeData)) {
			right = tmpNode;
			right ->data = nodeData;
			return;
		}
		else {
			right->insertNode(nodeData);
			left->insertNode(nodeData);
		}
		
	}
	// ========== Binary search in tree ================
	treeNode* searchData (int data1) {
		bool checkIfFind = false;
		while (!checkIfFind) {
			if (data == data1) {
				return this;
			}
			else if (data1 > data) {
				right->searchData(data1);
			}
			else if (data1 < data) {
				left->searchData(data1);
			}
			else if (left == NULL && right == NULL) {
				std::cout<<"\nData was not found";
			}
			 
		}
		
	}

	void deleteNode (int data) {
		
	}

};

//============= Print function =============
void print (treeNode* n) {
	if (n != NULL)
		return;
	else {
		print(n->left);
		std::cout<<n->data;
		print(n->right);
	}
};




// =========== main function ===============
int main() {

treeNode myNode = treeNode(20);
myNode.insertNode(5);
myNode.insertNode(23);
print(&myNode);

return 0;
}
