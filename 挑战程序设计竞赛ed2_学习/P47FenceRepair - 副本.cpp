#include<iostream>
#include<cstdio>
using namespace std;
long long ans=0;
int main()
{
	int L[20000+100],N,i;
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		scanf("%d",L+i);
		getchar();
	}
	while(N>1)
	{
		int min1=0,min2=1;
		if(L[min1]>L[min2])
		{
			int retain=min1;
			min1=min2;
			min2=retain;
		}
		for(i=2;i<N;i++)
		{
			if(L[i]<L[min1])
			{
				min2=min1;
				min1=i;
			}
			else
			{
				if(L[i]<L[min2])
					min2=i;
			}
		}
		ans+=L[min1]+L[min2];
		L[min1]=L[min1]+L[min2];
		L[min2]=L[N-1];
		N--;
	}
	cout<<ans<<endl;
	return 0;
}
/*	
总结：
模拟思路： 
主要学会估算 
*/
