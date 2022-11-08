#include<iostream>
using namespace std;

/*
E
DE
CDE
BCDE
ABCDE
*/

void pattern(int n)
{
  for(int row = n; row >0 ;row--)
  {
    char ch = 'A' + row -1;
    for(int col = n;col >0 ;col--)
    {
      if(row <= col)
      {
       cout << ch ;
       ch +=1;
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