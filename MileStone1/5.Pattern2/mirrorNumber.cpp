#include<iostream>
using namespace std;

/*
   1
  12
 123

*/

void pattern(int n)
{
	for(int i=1;i <= n;i++)
	{
        int temp = 1;
		for(int j=1;j <= n;j++)
		{
			if(j > n-i)
		    {
             cout << temp++;
		    }
		    else
		    {
		    	cout <<" ";
		    }
		}
        cout << endl;
	}
}

int main()
{

 int n;
 cin >> n;
 pattern(n);      
  
}


