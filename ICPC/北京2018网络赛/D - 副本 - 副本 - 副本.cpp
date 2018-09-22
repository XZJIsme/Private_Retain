#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
ll a[1000000+10],b[1000000+10],retain;
int main()
{
	int T,k=0;
	cin>>T;
	while(T--)
	{
		int n,c,cities=0,j;
		cin>>n>>c;
		retain=c;
		for(int i=0;i<n;i++) scanf("%d",a+i);
		for(int i=0;i<n;i++) scanf("%d",b+i);
		for(int i=0;i<n;i++)
		{
			c=retain;
			if(c+a[i]>=b[i])
			{
				if(c<0) continue;
				c+=a[i]-b[i];
				if(c<0) continue;
			}
			else continue;
			j=0;
			for(int s=i;;)
			{
				if(c<0) break;
				s++;
				if(s==n) s=0;
				if(s==i) 
				{
					printf("%d\n",s+1);
					j=1;
					goto con;
				}
				c+=a[s];
				if(c<0) break;
				if(c<b[s]) break;
				else
				{
					c+=a[s]-b[s];
					if(c<0) break;
				}
			}
		}
		if(j==0) printf("-1\n");
		con:continue;
	}
	return 0;
}
