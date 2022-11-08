#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n == 1)
		return 1;

	int smallAns = n - 1;
	return n * smallAns;
}

int fibo(int n)
{
	if(n ==1 || n == 2)
		return 1;
    
    int smallans1 = fibo(n-1);
    int smallans2 = fibo(n-2);

    int output = smallans1 + smallans2;

    return output;
}


bool isSorted(int arr[],int n)
{
	if(n == 0 || n==1 )
		return true;

	if(arr[0] > arr[1])
		return false;

	return isSorted(arr+1,n-1);
}
int main()
{
	// int n;
	// cin >> n;
	// cout << fact(n) << endl;

    // cout <<	fibo(10) << endl;

    // int arr[] = {10,20,20,30,40};
    // int n = 5;
    // cout << isSorted(arr,n);

    char ch[20];
    cin.getline(ch,20);
    cout << ch  << endl;
    cout << sizeof(ch) << endl;
    cout << int(ch[0]) - 48<< endl;
}