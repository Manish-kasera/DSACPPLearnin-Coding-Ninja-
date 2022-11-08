#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
    
    /*
    int i=1;
	while(i <= n)
	{
      cout << i <<endl;
      i++;
	} */

	int j = 2;
    int flag = 0;
	while(j * j <= n)
	{
		if((n % j) == 0)
		{
			cout << "Not Prime"<< endl;
			flag=1;
		}	
		j++;
	}

	if(flag == 0)
	{
		cout << "Prime Number" << endl;
	}
	return 0;
}