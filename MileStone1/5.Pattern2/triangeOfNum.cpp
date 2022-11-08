#include <iostream>
using namespace std;

/*
     1
    232
   34543
  4567654
*/
void pattern(int n)
{
	for(int i=0;i < n;i++)
	{
		int temp = i+1;
		for(int j=1;j < 2*n;j++)
		{
           if(j >= n-i && j <= n+i)
           {
           	 if(j >=  n)
           	 {
           	 	cout << temp--;
           	 }
           	 else
           	 {
           	 	cout << temp++;
           	 }
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
