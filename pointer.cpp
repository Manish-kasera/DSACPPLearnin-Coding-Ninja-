#include <bits/stdc++.h>
using namespace std;
#define SQUARE(x) x*x

void swap1(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


int main()
{
	/*
	int  num =10;
   int *ptr = &num;
	cout << &num << endl;
	cout << ptr << endl;

	cout << num << endl;
	cout << *ptr << endl;
	
	*ptr +=30;
	cout << num << endl;
	cout << *ptr << endl;

	num += 10;
	cout << num << endl;
	cout << *ptr << endl;
   */
      
   /*   
   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
   float *ptr1 = &arr[0];
   float *ptr2 = ptr1 + 3;
   cout<<*ptr2<<" ";
   cout<< ptr2 - ptr1;
   */
   
   // int num1 = 10,num2 = 20;
   // swap1(&num1,&num2);
   // cout << num1  <<" " << num2 << endl;
   // return 0;
    int x = 36 / SQUARE(6);
    cout << x;

  
}