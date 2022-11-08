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

Node* deleteFirstNode(Node *head)
{
	head = head -> next ;
	return head;
}

void deleteLastNode(Node *head)
{
  
  Node *temp = head;

  while((temp -> next) -> next != NULL)
  {
  	temp = temp -> next;
  }

  temp -> next = NULL;  
}

Node* deleteIndexNode(Node *head,int pos)
{

	  int count = 0;
    Node *temp = head;

    if(pos == 0)
    {
    	head = head -> next;
    	return head;
    }

	while(temp != NULL && count < pos -1)
	{
      temp = temp -> next;
      count++;
	}


  if(temp != NULL && temp -> next != NULL)
  {
    temp -> next = temp -> next -> next;    	
  }



    return head;
}

int main()
{
   Node *head = takeInput();
   print(head);

   // Deleting at start
   head = deleteIndexNode(head,3);
   print(head);
   
   // // Deleteing at Middle
   // deleteIndexNode(head,2);
   // print(head);

   
   // // Deleting at End
   // deleteIndexNode(head,4);
   // print(head);

   // // Deleting out of index
   // deleteIndexNode(head,9);
   // print(head);


   return 0;
}