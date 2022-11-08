#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int start ,int end)
{
	int pivot = arr[start];
	int count = 0;

	for(int i=start+1 ;i <= end;i++)
	{
		if(pivot >= arr[i])
			count++;
	}

    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);

	int i=start,j=end;

	while(i < j)
	{
		if(arr[i] <= pivot)
			i++;
		else if(arr[j] > pivot)
			j--;
		else 
			swap(arr[i++],arr[j--]);
	}

	return pivotIndex;
}

void quickSort(int arr[],int start,int end)
{
	if(start >= end)
		return;

	int p = partition(arr,start,end);
    // cout << p << endl;

	quickSort(arr,start,p-1);
	quickSort(arr,p+1,end);
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i <n;i++)
  {
  	cin >> arr[i] ;
  } 


  int start=0,end = n-1;

  quickSort(arr,start,end);

  for(int i=0;i<n;i++)
  {
  	cout << arr[i] <<" ";
  }
  
}


