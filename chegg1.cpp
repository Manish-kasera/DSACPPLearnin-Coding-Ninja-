#include<bits/stdc++.h>
using namespace std;

// Function while prints the value and its memory address
void printValueAndMoemory(int arr[][3],int row,int col)
{
	// looping through the rows
	for(int i=0;i < row;i++)
	{
		// looping through the columns
		for(int j=0;j < col;j++)
		{
			// Printing the value in 'i'th row and 'j'th column
			cout <<"Element : "<< arr[i][j]<<",";

			// Printing the memory address in 'i'th row and 'j'th column
			cout <<"Address : " << &(arr[i][j]) << "   ";
		}
	// after each row new line is there	
     cout << endl;
	}
}

int main()
{ 
	// Array input (Provided in the question)
	int arr[5][3] = {
		    {1,3,4},
          	{10, 22, 14},
        	{15,-1,3},
	        {4,3,2},
	        {1,2,4}
          };


// Calling the function which prints the value 
// and it's memory address 
 printValueAndMoemory(arr,5,3);

	return 0;
}