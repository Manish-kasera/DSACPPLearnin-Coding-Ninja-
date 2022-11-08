#include<bits/stdc++.h>
using namespace std;

int length(char ch[])
{
	int i=0,count=0;

	while(ch[i]!='\0')
	{
      count++;i++;
	}
	return count;
}

void reverse(char str[])
{
	int i=0;
    int n = length(str);
	while(i <= n/2)
	{
		swap(str[i],str[n-i-1]);
		i++;
	}
}


void trimSpace(char str[])
{ 
   char temp[100];
   int j=0;
   for(int i=0;i < str[i] !='\0' ;i++)
   {
        if(str[i] == ' ')
        	continue;
        else
        {
          temp[j] = str[i];
          j++;
        }
   }
   temp[j] = '\0';
   cout << temp << endl;
}


void printPrefix(char str[])
{
    int count =0;
    while(count < strlen(str))
    {
    	for(int i=0;i <=count;i++)
    	{
    		cout << str[i];
    	}
    	count++;
    	cout << endl;
    }
}

int main()
{
	char ch[102];

	// spaces as terminator
	/*
	cin >> ch; // Manish Kumar Kasera

  	cout << ch << endl; // Manish

  	cout << "length : " << length(ch) << endl;
    */ 
	// int arr[] = {34,34,2,3,4};

	// cout << arr << endl; // it will print the address

    // to get string as input 
	cin.getline(ch,100);
	// reverse(ch);

	// 'M' works as a delimeter;
	// cin.getline(ch,100,'M');

	// cout << ch << endl;

	// trimSpace(ch);
   
    printPrefix(ch);	
	return 0;
}
