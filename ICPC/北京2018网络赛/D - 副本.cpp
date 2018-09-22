#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
ll a[1000000+10],b[1000000+10];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,c,cities=0,j;
		cin>>n>>c;
		for(int i=0;i<n;i++) scanf("%d",a+i);
		for(int i=0;i<n;i++) scanf("%d",b+i);
		for(int i=0;i<n;i++)
		{
			if(c+a[i]>=b[i])
			{
				c+=a[i]-b[i];
			}
			else continue;
			j=0;
			for(int s=i;;)
			{
				s++;
				if(s==n) s=0;
				if(s==i) 
				{
					printf("%d\n",i+1);
					j=1;
					goto con;
				}
				c+=a[s];
				if(c<b[s]) break;
				else
				{
					c+=a[s]-b[s];
				}
			}
		}
		if(j==0) printf("-1\n");
		con:continue;
	}
	return 0;
}
