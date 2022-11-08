#include<bits/stdc++.h>
using namespace std;

void Leaders(int* arr,int len)
{
	// 3 12 34 2 0 -1

	vector <int> v;
    v.push_back(arr[len-1]);
    int temp = 1;

	for(int i=len-2; i>=0;i--)
	{
		int count = 0;
		for(int j=i+1; j < len;j++)
		{
			if(arr[j] > arr[i])
			   break;
         else
                count++;
		}
      
      if(count == temp)
      {
      	v.push_back(arr[i]);
      }
      temp++;
	}

	reverse(v.begin(),v.end());

	for(auto x: v)
		cout << x <<" ";
}



    
	
  
