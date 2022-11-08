#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	int a,b;
	cin >> a >> b;

	if(a == b)
	{
		cout <<"A and B are equal" << endl; 
	}
	else if( a > b)
    {
    	cout << "A is greater than B" << endl;
    }		
    else
    {
    	cout << "A is lesser than B" << endl;
    }	
	
	return 0;
}