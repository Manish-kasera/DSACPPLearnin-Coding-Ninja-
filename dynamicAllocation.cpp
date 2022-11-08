#include<bits/stdc++.h>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

void swapUsingRef(int &x,int &y)
{
    int temp = x;
    x = y ;
    y = temp;
}


int main()
{
	// char ch = 'A';
    // char *pt = &ch;
    // updateValue((int*)pt);
    // cout << ch;

   /*
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
   */
    
    /*
    int x = 10;
    int &y = x;
    cout << x << endl;
    cout << y << endl;

    y++;
    cout << x << endl;
    cout << y << endl;
    */

    // int num1 =10,num2=20;
    // cout << num1 <<" " << num2 << endl;
    // swapUsingRef(num1,num2);
    // cout << num1 <<" " << num2 << endl;

}