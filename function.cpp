#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if( n== 1)
		return 1;
    return n * fact(n-1);
}

int ncr(int n,int r)
{
	return (fact(n)/ (fact(n-r) * fact(r)));

}

void func(int a[]) {
    cout << sizeof(a) << endl;
}


int main()
{
	int n,r;
    cin >> n >> r;

    // cout << ncr(n,r) << endl;




    int a[10];
    func(a);


}

