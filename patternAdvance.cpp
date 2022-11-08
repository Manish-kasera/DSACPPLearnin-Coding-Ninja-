#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin >> n;

	/*
	   5 5 5 5 5
	   4 5 5 5 5
	   3 4 5 5 5 
	   2 3 4 5 5 
	   1 2 3 4 5
	*/
    
     // int i=n;
     // while(i >= 1)
     // {
     // 	int j=1;
     // 	int value = i; 
     // 	while( j<= n)
     // 	{
     // 		cout << value;
     // 		if(value < n)
     // 		{
     // 			value++;
     // 		}
     // 		j++;
     // 	}
     // 	cout << endl;
     // 	i--;
     // }




	/*
	   A B C D E
	   A B C D
	   A B C
	   A B
	   A
	*/
    
    // int i=1;
    // while( i <= n)
    // {
    // 	char ch = 'A';
    // 	int j=1;
    // 	while(j <= n-i+1)
    // 	{
    // 		cout << ch;
    // 		ch++;
    // 		j++;
    // 	}
    // 	cout << endl;
    // 	i++;
    // }







	/*
	  1 2 3 4 4 3 2 1
	  1 2 3 * * 3 2 1
	  1 2 * * * * 2 1
	  1 * * * * * * 1
	*/

      
     // for(int i=1; i <= n;i++)
     // {
     // 	int value = n - i + 1;
     // 	for(int j=1; j<= (2*n);j++)
     // 	{
     //       if(j <= n-i+1)
     //       {
     //       	cout << j;
     //       }
     //       else if (j <= n)
     //       {
     //       	cout <<"*";
     //       }

     //       if(j >= n + i)
     //       {
     //       	cout << value;
     //       	value--;
     //       }
     //       else if( j >= n+1  && j <= 2*n)
     //       {
     //       	cout <<"*";
     //       }
     // 	}
     // 	cout<< endl;
     // }


	/*
	    1  2  3  4  5
	    16          6
        15          7
        14          8
        13 12 11 10 9
	*/



     


	/* 
	                     1
	                   1 2 3
	                 1 2 3 4 5
	               1 2 3 4 5 6 7
	             1 2 3 4 5 6 7 8 9
	               1 2 3 4 5 6 7
	                 1 2 3 4 5
	                   1 2 3
	                     1
	*/

	/*     1     1
	        2   2
	         3 3
	          4
	         3 3
	        2   2
	       1     1

	*/
	return 0;
}
