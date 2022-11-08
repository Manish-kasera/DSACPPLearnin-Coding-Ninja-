#include <bits/stdc++.h>
using namespace std;

#include "Node.cpp"
#include "input.cpp"


void deleteNode(Node *temp ,int pos ,int count)
{
	if(count < pos - 1)
	{
		temp = temp -> next;
		count++;
		deleteNode(temp,pos,count);
	}
	else
	{
		if(temp != NULL && temp -> next != NULL)
		{
		temp -> next = temp -> next -> next;			
		}
	
	}
}


Node *deleteNodeRec(Node *head, int pos) 
{
   if(pos == 0)
     return head -> next;

   deleteNode(head,pos,0);
   return head;
}


int main()
{
  Node *head = takeInput();
  print(head);
  
  // deleting starting
  head = deleteNodeRec(head,0);
  print(head);

  // deleting at index 
  head = deleteNodeRec(head,2);
  print(head);

  // deleting ending
  head = deleteNodeRec(head,3);
  print(head);

  // for  out of the index
  head = deleteNodeRec(head,5);
  print(head);
}