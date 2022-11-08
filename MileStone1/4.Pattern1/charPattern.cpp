#include<iostream>
using namespace std;

/*
A
BC
CDE
DEFG
*/

void pattern(int n)
{
  for(int row = 0; row < n;row++)
  {
    char ch = 'A' + row;
    for(int col =0;col < n;col++)
    {
      if(row >= col)
      {
        cout << ch;
        ch += 1; 
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

