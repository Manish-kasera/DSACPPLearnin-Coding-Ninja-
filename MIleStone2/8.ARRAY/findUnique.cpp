int findUnique(int *arr, int n)
{
    int uni = 0;
    
    for(int i=0;i <n;i++)
    {
        uni ^= arr[i];
    }
    
    return uni;
}