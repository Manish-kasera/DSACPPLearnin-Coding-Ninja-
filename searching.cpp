#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
	for(int i=0;i <n;i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}

void bubbleSort (int arr[],int n)
{
	for(int i=0;i <n;i++)
	{
		for(int j=0;j < n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void insertionSort(int arr[],int n)
{
   for(int i=1;i <n;i++)
   {
   	for(int j=i ;j>0;j--)
   	{
   		if(arr[j] < arr[j-1])
   		{
   			swap(arr[j],arr[j-1]);
   		}
   	}
   }

}

void selectionSort(int arr[],int n)
{
	for(int i=0;i < n -1;i++)
	{   
		int maxi = INT_MIN;
		int index = i;
		for(int j=i+1;j < n;j++)
		{
             if(arr[index] > arr[j])
             {
             	index = j;
             }
		}

		swap(arr[i],arr[index]);
	}
}

void selectionSort1(int arr[],int n)
{
	for(int i=0;i < n-1;i++)
	{
		int min_index = i;
		for(int j=i+1; j < n;j++)
		{
			if(arr[min_index] > arr[j])
			{
				min_index = j;
			}
		} 
       swap(arr[min_index] , arr[i]);
	}
}

int main()
{

	int arr[] = {140 , 233 , 8 , 1, 15};
	int n= sizeof(arr)/sizeof(arr[0]);

    // bubbleSort(arr,n);

	// insertionSort(arr,n);

	selectionSort1(arr,n);
    printArray(arr,n);


	return 0;
}