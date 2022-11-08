#include<iostream>
using namespace std;

/*
  4444
  4444
  4444
  4444
*/

void pattern(int n)
{
	for(int row=0;row < n;row++)
	{
		for(int col=0;col <n;col++)
		{
           cout << n ;
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


