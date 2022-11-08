class Stack
{
    private:
	int nextIndex = 0;
	int* data;
	int capacity;

    public: 
    
    Stack(int totalSize)
    {
      data = new int[totalSize];
      nextIndex = 0;
      capacity = totalSize;
    }

    int size()
    {
    	return nextIndex;
    }

    bool isEmpty()
    {
    	if(nextIndex == 0)
    		return true;
    	return false;
    }


    void push(int ele)
    {
    	if(capacity == nextIndex)
    	{
    		cout << "Stack is Full" << endl;
    		return;
    	}
    	
        data[nextIndex] = ele;
        nextIndex++;
    }

    int pop()
    {
    	if(isEmpty())
    	{
    		cout << "Stack is empty" << endl;
    		return INT_MIN;
    	}
    
        nextIndex--;
    	return data[nextIndex];
 
    }

    int top()
    {
    	if(isEmpty())
    	{
    		cout << "Stack is empty" << endl;
    		return INT_MIN;
    	}
    	return data[nextIndex-1];
    }

    
   
   
  

};