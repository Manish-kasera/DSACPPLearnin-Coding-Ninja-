#include<iostream>
using namespace std;

/*

    *
   ***
  *****
   ***
    *
*/

void pattern(int row)
{
	int n = (row+1)/2,k=0;
    for(int i = 1; i <= row ;i++)
    {
        i <= n? k++: k--;
        for(int j = 1; j <= row;j++)
        {
         if(j >= n+1-k && j <= n-1+k)
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
