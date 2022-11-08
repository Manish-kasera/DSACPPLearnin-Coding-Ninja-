#include<iostream>
using namespace std;

/*
 A
 BB
 CCC
*/

void pattern(int n)
{
  for(int row = 0; row < n;row++)
  {
  	char ch ='A';
  	for(int col = 0; col < n; col++)
  	{
  		if(row >= col)
  		{
          cout <<(char) (ch + row);
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

