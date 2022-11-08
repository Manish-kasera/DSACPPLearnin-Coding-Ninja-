#include<bits/stdc++.h>
using namespace std;

class Node
{
	public :
	int data;
	Node *next;

	Node(int data)
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
			tail = newNode ;
		}
		else
		{

		   tail -> next = newNode;
		   tail = newNode;

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
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}

void removeDup(Node *head)
{
	// If there is no element in LL
	if(head == NULL)
		return;

	Node *prev = head;
	Node *curr = head -> next;

	while(curr != NULL)
	{
		if(curr -> data == prev -> data && (curr-> next != NULL))
		{
			curr = curr -> next;
		}
		else
		{
			// Checking last 2 elemet in LL
			if(curr->next == NULL && curr -> data == prev -> data)
			{
				prev -> next = NULL;
				return;
			}
			// making connection
			prev -> next = curr;
			prev = curr;
			curr = prev ->next;
		}
	}
}

int main()
{

	Node *head = takeInput();
    print(head);
    cout << endl;

	removeDup(head);
	print(head);

}