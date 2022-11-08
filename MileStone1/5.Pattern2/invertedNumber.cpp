#include<iostream>
using namespace std;

/*
4444
333
22
1
*/

void pattern(int n)
{
	int temp = n;
	for(int i=0;i < n;i++)
	{
		for(int j =0 ;j < n;j++)
		{
			if(j >= i)
			{
           cout << temp;
			}
		}
		temp--;
      cout << endl;
	}
}

int main()
{
	int n;
   cin >> n;
   pattern(n);      
    
}


