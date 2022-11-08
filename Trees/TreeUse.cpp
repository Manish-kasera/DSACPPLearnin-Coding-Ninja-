#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#include "TreeNode.h"


TreeNode<int>* takeInputLevelWise()
{
	cout <<"Enter root Data : " << endl;
	int rootData;
	cin >> rootData;
	TreeNode<int> *root = new TreeNode<int>(rootData); 

	// storing data in queue to use next time
	queue <TreeNode<int>*> pendingNode;

	pendingNode.push(root);

	while(pendingNode.size() != 0)
	{
		TreeNode<int> *front = pendingNode.front();
		pendingNode.pop();

        cout <<"How many children of " << front-> data << endl ;
		int numChild;
		cin >> numChild;

		for(int i=0;i < numChild;i++)
		{
			cout<<"Enter " << i <<"th child of " << front->data << endl;
			int childData;
            cin >> childData;

           TreeNode<int> *child = new TreeNode<int>(childData);
           front -> children.push_back(child);
           pendingNode.push(child);
		}

	}

}



TreeNode<int>* takeInput()
{
   cout <<"Enter Data"<< endl;	
   int rootData;
   cin >> rootData;
   TreeNode<int>* root = new TreeNode<int>(rootData);	

   cout << "Enter Children of : " <<rootData << endl;
   int n;
   cin >> n;

   for(int i=0;i < n;i++)
   {
     TreeNode<int>* child = takeInput();
     root ->children.push_back(child);
   }

   return root;
}

void printTree(TreeNode<int> *root)
{
    if(root == NULL)
    	return;

   cout << root -> data <<":";

   for(int i=0;i < root -> children.size();i++)
   {
   	cout << root -> children[i]->data <<",";
   }
   cout << endl;
   for(int i=0;i < root->children.size();i++)
   {
   	 printTree(root-> children[i]);
   }
}



int main()
{

	// TreeNode <int> *root = new TreeNode<int>(1);
	// TreeNode <int> *node1 = new TreeNode<int>(2);
	// TreeNode <int> *node2 = new TreeNode<int>(3);

	// root -> children.push_back(node1);
	// root -> children.push_back(node2);
    
    // TreeNode<int>* root = takeInput();

    // printTree(root);
	return 0;
}