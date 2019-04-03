int search(int k,int x[],int n)
{
	int left=0,right=n-1,mid;
	int det=-1;
	while(left<right)
	{
		//system("pause");
		mid=(left+right)/2;
		if(x[mid]<k)
		{
			left=mid+1;
		}
		else if(x[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			return mid;
		}
	}
	if(left==0)
		return 1;
	else if(left==1)
		return 1;
	else
		return (left-1);
}
