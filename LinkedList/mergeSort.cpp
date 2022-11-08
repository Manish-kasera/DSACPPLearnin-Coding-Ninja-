#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"
#include "input.cpp"


Node* mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
   if(head1 == NULL)
   	return head2;

   if(head2 == NULL) 
   	return head1;

   Node *head = NULL;

   if(head1 -> data < head2 -> data)
   {
   	 head  = head1;
   	 head1 = head1 -> next;
   }
   else
   {
   	head = head2;
   	head2 = head2 -> next;
   }

   Node *tail = head;
   while(head1 != NULL && head2 != NULL)
   { 

   	if(head1 -> data < head2 ->data)
   	{ 

     tail -> next = head1;
     head1 = head1 -> next;
   	}
   	else
   	{
   		tail -> next = head2;
   		head2 = head2 -> next;
   	}

    tail = tail -> next;
   }

   if(head1 != NULL)
   {
   	tail -> next = head1;
   	head1 = head1 -> next;
   }

   if(head2 != NULL)
   {
   	tail -> next = head2;
   	head2 = head2 -> next;
   }

   return head;
}


Node* middle(Node* curr)
{
    Node *slow = curr;
    Node *fast = curr -> next;
    
    while(fast != NULL && fast -> next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    
    return slow;
}

Node* mergeSort(Node* head)
{
    
    if(head == NULL || head ->next == NULL)
        return head;
    
    Node* midNode = middle(head);
    
    Node* first = head;
    Node * second = midNode -> next;
    midNode ->next = NULL;
     
     

    first = mergeSort(first);
    second = mergeSort(second);
    
    head = mergeTwoSortedLinkedLists(first,second);
    
    return head;
}


int main()
{
  
  Node *head1 = takeInput();
  print(head1);
   
  Node* head = mergeSort(head1);
  print(head);
  
	return 0;
}