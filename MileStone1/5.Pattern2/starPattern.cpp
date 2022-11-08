#include<iostream>
using namespace std;

/*
     *
    ***
   *****
  *******

*/

void pattern(int n)
{
	for(int i=0;i < n;i++)
	{
		for(int j=1;j < 2*n;j++)
		{
           if(j >= n-i && j <= n+i)
           {
           	cout <<"*";
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


