#include<bits/stdc++.h>
void intersection(int *arr1, int *arr2, int n1, int n2)
{
    vector <int> v;
   for(int i=0;i < n1;i++)
   {
       for(int j=0;j<n2;j++)
       {
           if(arr1[i] == arr2[j])
           {
               v.push_back(arr1[i]);
               arr1[i] = -1;
               arr2[j] = -1;
               break;
           }
       }
   }
   
    for(auto x : v)
        cout << x<<" ";
}