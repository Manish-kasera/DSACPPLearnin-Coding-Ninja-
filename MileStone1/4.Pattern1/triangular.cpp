#include<iostream>
using namespace std;

/*

*
**
***
****

*/

void pattern(int n)
{
	for(int row =0; row < n;row++)
	{
		for(int col = 0; col < n;col++)
		{
			if(row >= col)
			{
				cout <<"*";
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

  return 0;
   
}


