#include<bits/stdc++.h>
using namespace std;

int windowSliding(int arr[],int n,int k)
{
	int maxSum=0;
	int windowSum = 0;

	for(int i=0;i <k;i++)
	{
		windowSum += arr[i];
	}

	for(int end= k;end <n;end++)
	{
      windowSum += arr[end] - arr[end-k];
      maxSum = max (windowSum,maxSum);
	}

	return maxSum;
}

int main()
{
	int arr[] ={ 1, 4, 2, 10, 23, 3, 1, 0, 200 };
	int k=4,n =sizeof(arr)/sizeof(arr[0]);
	
	cout << windowSliding(arr,n,k) << endl;
	return 0;
}
