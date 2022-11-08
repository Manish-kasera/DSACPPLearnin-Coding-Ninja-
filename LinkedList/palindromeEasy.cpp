Node* mid(Node *head)
{
    Node *first = head;
    Node *second = head;
    
    while(second != NULL && second-> next != NULL)
    {
        first = first -> next;
        second = second -> next -> next;
    }
    
    return first;
}

Node* reverse(Node *head)
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *curr = head;
    
    while(curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    Node *first = head;
    Node *second = mid(head);
    
    second = reverse(second);
    
     Node* i = first;
     Node* j = second;
    
     while(j)
     {
            // cout << i->val << endl;
            if(i->data != j->data)
            {
                return false;
            }
            i = i->next;
            j = j->next;
    }
        
        return true;
    
}