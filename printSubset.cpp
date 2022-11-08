#include <bits/stdc++.h>
using namespace std;

void subset(int arr[],vector <int> &v,int i,int n)
{
    if(i == n)
    {
    	for(auto x : v)
    		cout << x << " ";

    	cout << endl;
    	return;
    }
    // Not including the the element in vector
	subset(arr+1,v,i+1,n);


    //Including the the element in vector
    v.push_back(arr[0]);
    subset(arr+1,v,i+1,n);
    v.pop_back();

}

int main()
{
	int arr[3] = {10,20,30};
	vector <int> v;
	int n = sizeof(arr) / sizeof(arr[0]);
	int i=0;
	subset(arr,v,i,n);
}