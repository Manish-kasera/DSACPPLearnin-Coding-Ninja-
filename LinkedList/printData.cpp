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
   
   Node(int data)
   {
   	this -> data = data;
   	next = NULL;
   }

};

void increment100(Node *head)
{
	Node *temp = head;

	while(temp != NULL)
	{
		temp -> data = temp -> data + 100;
		temp = temp -> next;
	}
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

int len(Node *head)
{
	Node *temp = head;
    int count = 0;
	while(temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	return count;
}

int mid(Node *head)
{
	Node *first = head;
	Node *second = head;

	while(second != NULL && second->next != NULL)
	{
		first = first -> next;
		second = second -> next;
		second = second -> next;
	}

	return first -> data;
}

int main()
{
	// Statically Allcoation of Nodes
   
   // Node n1(10);
   // Node *head = &n1;
  
   // Node n2(20);
   
   // Node n3(30);
   
   // Node n4(40);

   // Node n5(50);

   // n1.next = &n2;
   // n2.next = &n3;
   // n3.next = &n4;
   // n4.next = &n5;
  
   // increment100(head);

   // print(head); 

   // cout <<"Length : " << len(head) << endl;

   // cout <<"Middle ele(odd) : " << mid(head) << endl;


   // Dynamic Allocations of Nodes

	Node *n1 = new Node(10);
	Node *n2 = new Node(20);
	Node *n3 = new Node(30);
	Node *n4 = new Node(40);
	Node *n5 = new Node(50);

	Node *head = n1;
	cout <<"Head Node : "<< head << endl;

	n1 -> next = n2;
	n2 -> next = n3;
	n3 -> next = n4;
	n4 -> next = n5;

	print(head);
	cout <<"length : " << len(head) << endl;

	cout <<"Middle Element(odd) : "<< mid(head) << endl;

	increment100(head);
	print(head);

}