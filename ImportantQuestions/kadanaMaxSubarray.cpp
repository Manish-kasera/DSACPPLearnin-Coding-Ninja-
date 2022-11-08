#include<bits/stdc++.h>
using namespace std;

int maxSubarry(int arr[],int n)
{
	int currSum = 0, maxSum = INT_MIN;

	for(int i=0;i <n;i++)
	{
		currSum += arr[i];
		maxSum = max(maxSum,currSum);

		if(currSum < 0)
			currSum = 0;
	}
	return maxSum;
}
int main()
{
	
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr)/sizeof(arr[0]);


	cout << maxSubarry(arr,n) << endl;
	return 0;

}
