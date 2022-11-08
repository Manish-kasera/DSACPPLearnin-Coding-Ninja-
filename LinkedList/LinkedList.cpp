#include<bits/stdc++.h>
using namespace std;

#include "Node.cpp"

int main()
{

    
	Node n1(1);
    Node *head = &n1;

	Node n2(2);
    n1.next = &n2;


    cout << "Head Node Address : " << head << endl;


    // cout << n1.data  <<" " << n1.next << endl;
    // cout << n2.data << " " << n2.next << endl;

    Node *temp = head;

    while(temp != NULL)
    {
    	cout << temp->data << endl;
    	temp =  temp->next;
    }

	return 0;
}