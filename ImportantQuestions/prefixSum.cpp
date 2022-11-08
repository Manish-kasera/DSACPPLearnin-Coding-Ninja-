#include<bits/stdc++.h>
using namespace std;

int sum(int start,int end,int arr[])
{
  return arr[end] - arr[start];
}
 
int main()
{
  int arr[] = {10,20,30,40,50};
  int n = sizeof(arr)/sizeof(arr[0]);
   
  
  // Computing prfix sum and storing in array arr itself;
  for(int i=1;i <n;i++)
    arr[i] = arr[i] + arr[i-1];

  for(int i=0;i < n;i++)
  {
    cout << arr[i] << " ";
  }
  
  // sum in the range sum(i,j)
  cout << endl << sum(2,4,arr);


  return 0;
}