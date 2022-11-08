int sum(int arr[],int n)
{
	// arr : 2 4 4 6  2
	int sum = 0;
	
	for(int i=0;i < n;i++)
		sum +=arr[i];
	
	return sum; // 18
}