int tripletSum(int *arr, int n, int x)
{
    int c=0;
    for(int i=0;i <n;i++)
    {
       for(int j=i+1; j< n;j++)
       {
           for(int k=j+1;k < n ;k++)
           {
               if((arr[i] + arr[j] + arr[k]) == x)
                   c++;
           }
       }
    }
    return c;
    
}