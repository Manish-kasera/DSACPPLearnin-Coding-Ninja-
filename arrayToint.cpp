#include <bits/stdc++.h>
using namespace std;

int toInteger(int arr[],int n)
{
	int tenpow = n-1;
	int num =0;

	for(int i=0;i < n;i++)
	{
		num += arr[i] * pow(10,tenpow);
		tenpow--;
	}
   return num;
}

int main()
{
   int arr[] = {0,4,9};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << toInteger(arr,n);

}
