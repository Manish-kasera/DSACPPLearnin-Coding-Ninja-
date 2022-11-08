#include<bits/stdc++.h>
using namespace std;

class Node
{
 public:
	int data;
	Node *next;

	Node()
	{

	}

	Node (int data)
	{
		this -> data = data;
		next = NULL;
	}

};


void print(Node *head)
{
	Node *temp = head;

	while(temp != NULL)
	{
		cout << temp -> data<<" ";
		temp = temp -> next;
	}
  
  cout << endl;
}

Node* takeInput()
{

	int data;
	cin >> data;
   
    Node *head = NULL;
    Node *tail = NULL;

	while(data != -1)
	{
		Node *newNode = new Node(data);
		
		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
		   tail -> next = newNode;
		   
		   tail = tail -> next;
		   // OR tail = newNode;
		}

		cin >> data;

	}

	return head;
}

Node* insertNode(Node *head,int data,int pos)
{
	 Node *newNode = new Node(data);

   Node *prev = head;
   int count = 0;

   if(pos == 0)
   {
   	  newNode -> next = head;
   	  head = newNode;
   	  return head;
   }
   
   while(prev != NULL && count < pos-1)
   {
   	prev = prev -> next;
   	count++;
   }
   
   if(prev != NULL)
   {
   	 Node *agla = prev -> next;
     prev ->next = newNode;
     newNode -> next = agla;

   }
 
  
// OR THIS
// if(prev != NULL)
// {
// newNode->next = prev -> next;
// prev -> next = newNode;
// }

   return head;
}


int main()
{
  Node *head = takeInput();

  print(head);

  // Inserting at starting
  head = insertNode(head,100,0);
  print(head);

  // insert at middle anyway
  head = insertNode(head,1000,3);
  print(head);

  // inserting out of bound index
  head = insertNode(head,10000,13);
  print(head);


	return 0;
}