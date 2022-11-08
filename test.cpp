#include <bits/stdc++.h>
using namespace std;

#define INDEX 128

int kadanaAlgo(int arr[],int n)
{
       int currSum = 0;
       int maxSum = INT_MIN;

       for(int i=0;i < n;i++)
       {
              currSum += arr[i];
              maxSum = max(maxSum,currSum);
              if(currSum < 0)
                     currSum = 0;
       }

       return maxSum;
}

void sort012(int arr[],int n)
{
   int start = 0, mid = 0;
   int end = n - 1;

   while(mid <= end)
   {
       switch(arr[mid])
       {
         case 0:
              swap(arr[mid++],arr[start++]);
              break;
         case 1:
             mid++;
             break;

         case 2 :
              swap(arr[mid],arr[end--]) ; 
              break;       
       }
   }
}


void prefixSum(int arr[],int n)
{
       for(int i=1;i < n;i++)
       {
           arr[i] = arr[i] + arr[i-1];
       }
}

int prefixSumIndex(int arr[],int start,int end)
{
  if(start == 0)
   return arr[end];  

  return (arr[end] - arr[start-1]);     
}

void countFre(string s)
{
    int arr[INDEX]={0};
    for(int i=0;i <s.size();i++)
    {
       arr[s[i]]++;
    }

    int maxi = INT_MIN;
    int index ;
    for(int i=0 ;i<INDEX;i++)
    {
       cout << i <<" " << arr[i] << endl;

       if(maxi < arr[i])
       {
              maxi = arr[i];
              index = i;
       }
    }
    
    cout << "Character which has maximum frequency : ";
    cout <<"Char : " << char(index) <<" Frequency : " << maxi << endl;
}

int main()
{

  // int n;
  // cin >> n;

  // int arr[n];
  // for(int i=0;i <n;i++)
  // {
  //      cin >> arr[i];
  // }


  
  // cout << kadanaAlgo(arr,n);

  // sort012(arr,n);

  // prefixSum(arr,n);

  // cout << prefixSumIndex(arr,2,3) << endl;

  // for(int i=0;i <n;i++)
  // {
  //      cout << arr[i] <<" ";
  // }
    
   string s;
   getline(cin,s);
   
  
   countFre(s);

  
  return 0;
}