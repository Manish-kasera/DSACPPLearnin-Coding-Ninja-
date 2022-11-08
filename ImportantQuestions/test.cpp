#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
	int k=4,n=9;
	if(k > n)
	{
		cout<<"-1";
	    return 0;
    }
    
    int temp =k,maxi = INT_MIN;
	for(int i=0;i <= n-k;i++)
	{
	  int j=i,sum=0;
      while(temp--)
      {
        sum += arr[j];
        j++;
      }
      temp = k;
      // cout << sum << endl;
      maxi = max(maxi,sum);
	}

	cout << maxi << endl;
	return 0;
}