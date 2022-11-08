#include<bits/stdc++.h>
using namespace std;

// important concepts
void fun(int arr[],int n)
{
	// it will print 8
	// because arr is a pointer 
	// cout << sizeof(arr) << endl;
    // it will can the value in main array
	arr[0] = 100;
}

void reverse(int arr[],int n)
{
	int i=0;
	while(i <= n/2)
	{
		swap(arr[i],arr[n-i-1]);
		i++;
	}
}

int main()
{
	int n;
	cin >> n;

    // Must declare array with const value
	int arr[100];
    // int largest = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		// largest = max(largest,arr[i]);
   	}

   	// cout << largest << endl;
   	// cout << "Before : ";
 //   	for(int i=0;i < n;i++)
	// {
	// 	cout<<arr[i] << " ";
	// }

	// fun(arr,n);
   
 //    cout <<endl <<"After : ";
	// for(int i=0;i < n;i++)
	// {
	// 	cout<<  arr[i] << " ";
	// }


    reverse(arr,n);
    for(int i=0;i <n;i++)
    {
    	cout << arr[i]<< " ";
    }
}