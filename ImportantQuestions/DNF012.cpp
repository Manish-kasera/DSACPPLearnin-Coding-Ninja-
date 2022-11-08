#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n)
{
	int low=0,mid=0;
	int high = n-1;

	while(mid <= high)
	{
		switch(arr[mid])
		{
			case 0:
			      swap(arr[mid],arr[low]);
			      low++;
			      mid++;
			      break;

			case 1:
			      mid++;
			      break;

			case 2:
			      swap(arr[high],arr[mid]);
                  high--;
                  break;
			                 
		}
	}
}

int main()
{

	int arr[] = {2,0,1,0,2,1,0,1,0,2,0,2};
	int n= sizeof(arr)/sizeof(arr[0]);

	sort012(arr,n);

	for(int i=0;i <n;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}