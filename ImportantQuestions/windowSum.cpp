#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[],int n,int k)
{
	int maxi = 0;

    // making a window
	for(int i=0;i <k;i++)
	{
		maxi += arr[i];
	}

	int window_sum = maxi ;

	for(int i=k;i<n;i++)
	{
		// adding next elemnet and removing the last element
		window_sum = window_sum + arr[i] - arr[i-k];

		maxi = max(maxi,window_sum);
	}
	return maxi;
}

int main()
{
	int arr[] ={34,4,10,324,45,5,5};

	int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
	
	cout << maxSumSubarray(arr,n,k) << endl; 

	return 0;
}
