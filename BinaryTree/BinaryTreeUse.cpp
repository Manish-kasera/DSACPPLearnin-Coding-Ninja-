#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;


void MyFunprint(BinaryTreeNode<int> *root)
{
	queue<BinaryTreeNode<int>*> pendingNode;
	pendingNode.push(root);
	cout << root -> data << endl;

	while(pendingNode.size() != 0)
	{
		BinaryTreeNode <int> *first = pendingNode.front();
		if(first == NULL)
			return;
		pendingNode.pop();
		

        if(first -> left != NULL )
        {
		    cout << first -> left -> data << endl;
		    pendingNode.push(first -> left);
        }

        if(first -> right != NULL )
        {
		    cout << first -> right -> data << endl;
		    pendingNode.push(first -> right);
        }

		
        

	}
}

void printTree(BinaryTreeNode<int> * root)
{
	// Base case
	if(root == NULL)
		return;
	cout << root -> data <<": " ;
	
	if(root -> left != NULL)
	{
      cout <<"L" << root -> left -> data <<",";
	}
	if(root -> right != NULL)
	{
      cout <<"R" << root -> right -> data ;
	}
	cout << endl;
    printTree(root -> left);
    printTree(root -> right);
}


BinaryTreeNode<int> * takeInput()
{
	cout << "Enter data : " << endl;
	int rootData;
	cin >> rootData;

	if(rootData == -1)
		return NULL;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

	BinaryTreeNode<int> *leftChild = takeInput();
	BinaryTreeNode<int> *rightChild = takeInput();

	root -> left = leftChild;
	root -> right = rightChild;

	return root;

}

BinaryTreeNode<int>* takeInputLevelWise() 
{
	int rootData ;
	cout << "Enter root data :" << endl;
	cin >> rootData;

	if(rootData == -1)
		return NULL;

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size() != 0)
    {
    	BinaryTreeNode<int> *first = pendingNode.front();
    	pendingNode.pop();

    	cout << "Enter left node of " << first -> data << endl;
    	int l;
    	cin >> l;
    	
    	if(l != -1)
    	{

    	 BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(l);
         first -> left = leftChild;
         pendingNode.push(leftChild);

    	}
    	
    	

    	cout << "Enter right node of " << first -> data << endl ;
    	int r;
    	cin >> r;
    	
    	if(r != -1)
    	{
   		 BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(r);
    	 first -> right = rightChild;
    	 pendingNode.push(rightChild);
    	}
    	
    }	
	
   return root;
}

int main()
{
    // BinaryTreeNode <int> * root = new BinaryTreeNode<int>(10);
    // BinaryTreeNode <int> * node1 = new BinaryTreeNode<int>(20);
    // BinaryTreeNode <int> * node2 = new BinaryTreeNode<int>(30);
    // BinaryTreeNode <int> * node3 = new BinaryTreeNode<int>(40);
    // BinaryTreeNode <int> * node4 = new BinaryTreeNode<int>(50);

     
    // root -> left = node1;
    // root -> right = node2;  

    // node1 -> left = node3;
    // node1 -> right = node4;


    // cout << root -> data << endl;
    // cout << root -> left -> data << endl;
    // cout << root -> right -> data << endl;

    
    // MyFunprint(root);
   


    // BinaryTreeNode <int> * root = takeInput();

    BinaryTreeNode<int> *root = takeInputLevelWise();

    printTree(root);
    delete(root);

	return 0;
}