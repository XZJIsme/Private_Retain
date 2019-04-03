#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;
int s[1000000*2+100];
int sum[1000000*2+100];
int main()
{
	while(1)
	{
		int n,i;
		int ans=0;
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(i=0;i<n;i++)
			scanf("%d",s+i);
		sum[1]=s[0];
		sum[0]=0;
		for(int i1=0;i1<n;i1++)
			s[i++]=s[i1];
		for(i=2;i<=n*2;i++)
			sum[i]=s[i-1]+sum[i-1];
		if(n==1&&s[0]<0)
		{
			cout<<"0"<<endl;
			continue;
		}
		else if(n==1&&s[0]>=0)
		{
			cout<<"1"<<endl;
			continue;
		}
		for(i=1;i<=n;i++)
		{
			int min=i;
			for(int i1=i+1;i1<=i+n-1;i1++)
			{
				if(sum[i1]<sum[min])
					min=i1;
			}
			if(sum[min]-sum[i-1]>=0)
				ans++;
		}	
		cout<<ans<<endl;
	}
	return 0;
}



