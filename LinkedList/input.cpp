#include<bits/stdc++.h>
using namespace std;


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
