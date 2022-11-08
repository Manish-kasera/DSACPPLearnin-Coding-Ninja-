#include<bits/stdc++.h>
using namespace std;

void printSubsetSum(int arr[],int i,int n,int sum)
{
	if(i == n)
	{
		
		cout << sum << endl;
		return ;
	}

  // Including the element in sum
  sum = sum + arr[i];	
  printSubsetSum(arr,i+1,n,sum);
  sum = sum - arr[i];


  // Not Including the element in sum
  printSubsetSum(arr,i+1,n,sum);

}

int main()
{ 
	int arr[] ={1,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

	printSubsetSum(arr,0,n,sum);

	return 0;
}