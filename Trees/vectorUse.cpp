#include<bits/stdc++.h>
using namespace std;

int main()
{
	// declaring a vector
	vector <int> v;

    // taking input in a vector
	for(int i=0;i < 5;i++)
	{
		int x ;
		cin >> x;
		v.push_back(x);
	}

    // printing the vector
	for(auto x : v)
	{
		cout << x <<" " ;
	}
    cout << endl;

    for(int i=0;i < v.size();i++)
    {
    	cout << v[i] <<" ";
    }
    cout << endl;
    

    for(int i=0;i < v.size();i++)
    {
    	cout << v.at(i) <<" ";
    }

	return 0;
}