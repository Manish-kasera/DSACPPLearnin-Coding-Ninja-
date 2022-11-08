#include<iostream>
using namespace std;

/*
 1
 21
 321
 4321
*/

void pattern(int n)
{
	for(int row =1; row <= n;row++)
	{
        int temp = row;
		for(int col=1;col <= n;col++)
		{
			if(row >= col)
			{
				cout << temp-- ;
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