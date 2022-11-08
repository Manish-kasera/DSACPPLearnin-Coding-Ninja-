
/*
  if n = 6
  arr : 1 3 5 6 4 2

  if n = 9
  arr : 1 3 5 7 9 8 6 4 2
*/

void arrange(int *arr, int n)
{
    int value = 1;
    if(n % 2 == 0)
    {
        int i=0;
        for(i;i < n/2 ;i++)
        {
            arr[i] = value;
            value += 2;
        }
        value = n;
        for(i ;i <n;i++)
        {
            arr[i] = value;
            value -= 2;
        }
    }
    else
    {
        int i=0;
        for(i; i<= (n/2);i++)
        {
            arr[i] = value;
            value += 2;
        }
        value = n - 1;
        for(i ;i <n;i++)
        {
            arr[i] = value;
            value -= 2;
        }
        
    }
        
}