#include<cstdio>
using namespace std;
int a[100000][100000];
int main()
{
	int n,i,q,l,r,L,ans,t,qt;
	scanf("%d%d",&n,&q);
	getchar();
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	getchar();
	while(q--)
	{
		scanf("%d%d%d",&qt,&l,&r);
		getchar();
		if(qt==1)
		{
			ans=0;
			t=0;
			L=r-l+1;
			for(i=l-1;i<=r-1;t++,i++)
			{
				ans+=a[i]*(L-t);
			}
			printf("%d\n",ans);
		}
		if(qt==2)
			a[l-1]=r;
	}
	return 0;
}
