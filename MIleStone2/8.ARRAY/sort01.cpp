void sortZeroesAndOne(int *arr, int n)
{
   int low=0,high = n-1;

   while(low < high)
   {
   	 if(arr[low] == 0)
   	 	low++;
   	 else if(arr[high] == 1)
   	 	high--;
   	 else
   	 	swap(arr[low++],arr[high--]);

   } 
}