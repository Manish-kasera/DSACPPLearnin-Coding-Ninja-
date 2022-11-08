#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col)
{

	for(int i=0;i < row;i++)
	{
		for(temp =0; temp < row -i ;temp++)
		{

          for(int j=0;j <col ;j++)
		  {
			cout << input[i][j] <<" ";
		  }
		  cout << endl;
		}
		
	}
	
}

