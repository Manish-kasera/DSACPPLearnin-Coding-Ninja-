#include<bits/stdc++.h>
using namespace std;

void wavePrint(int arr[3][4], int row, int col)
{
    
    for(int i=0;i < col;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j <row;j++)
            {
                cout << arr[j][i] <<" ";
            }
        }
        else
        {
            for(int j= row-1; j>0;j--)
            {
                cout << arr[j][i] <<" ";
            }
        }
    }
}

int main()
{
	/*
	int m,n;
	cin >> m >> n;
    int arr[m][n];
    
    for(int i=0;i <m;i++)
    {
        for(int j=0;j <n;j++)
        {
            cin >> arr[i][j];
        }
    }
    
 
    int col[n];
    
    for(int i=0;i < n;i++)
    {
        int temp=0;
        for(int j=0;j <m;j++)
        {
            temp += arr[j][i];
            cout << arr[j][i] <<" ";
        }
        
        col[i] = temp;
        cout << endl;
    }
    
    for(int i=0;i < n;i++)
    {
        cout << col[i] <<" ";
    }
    */
    
    int arr[3][4] = { {1,2,3,4},
                      {5,6,7,8} , 
                      {9,10 ,11, 12},
                  };
    wavePrint(arr,3, 4);
}