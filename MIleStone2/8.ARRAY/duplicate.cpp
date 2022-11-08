
int duplicateNumber(int *arr, int n)
{
    set <int>  s;
    int sum =0;
    for(int i=0;i <n;i++) // O(N)
    {
        sum += arr[i];
        s.insert(arr[i]); // O(logN)
    }
    
    for(int x: s)
        sum -= x;
    
    return sum;
}