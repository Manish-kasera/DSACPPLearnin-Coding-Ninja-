#include<iostream>
using namespace std;

/*
 1
 22
 333
 4444
*/

void pattern(int n)
{
	for(int row =1; row <= n;row++)
	{
		for(int col=1;col <= n;col++)
		{
			if(row >= col)
			{
				cout << row ;
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



