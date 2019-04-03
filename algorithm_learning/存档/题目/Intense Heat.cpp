//求前缀和可提高本题的运行效率 
//Version 2018年8月6日17:16:35 //GNU C
#include<stdio.h>
int main()
{
	int n,k,i,t;
	double a[5000],sum[5000],p,ans=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{scanf("%lf",a+i); sum[i]=sum[i-1]+a[i];}
	for(i=0;i<n;i++)
		for(t=k;t<=n;t++)
		{
			if(i+t-1>=n) break;
			if(i==0) p=(sum[i+t-1]-0)/t;
			else p=(sum[i+t-1]-sum[i-1])/t;
			if(p>ans) ans=p;
		}
	printf("%lf",ans);
	return 0;
} 
























































/*#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	double a[5000],sum[5000],p,ans=0;
	int i,t,m;
	scanf("%d%d",&n,&k);
	getchar();sum[0]=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf",a+i);
		if(i==0) sum[1]=a[i];
		else sum[i+1]=sum[i]+a[i];
		//printf("%lf\n",sum[i]);
	}
	getchar();
	//system("pause");
	if(k==1)
	{
		sort(a,a+n);
		printf("%lf\n",a[n-1]);
		return 0;
	}
	m=n-k;
	//for(auto &v:sum)
	//{
	//	cout<<v<<endl;
	//	if(&v==sum+n-1)
	//		break;
	//}
	//system("pause");
	double L,R;
	for(i=1;i<=n;i++)
	{
		for(t=k;t<=n;t++)
		{
			if(i+t-1>n) break;
			if(i-1==0)
			{
				R=((double)(0));
				L=sum[i+t-1];
				//if(i+t-1>n) break;
			}
			else
			{
				R=sum[i-1];
				L=sum[i+t-1];
			}
			p=L-R;
			p/=((double)t);
			if(p>ans) ans=p;
		}
	} 
	
	
	
	printf("%lf",ans);
	return 0;
}*/

/*int main()
{
	int n,k,i,m,t,d;
	double a[5000],ans=-1,p;
	scanf("%d%d",&n,&k);
	getchar();
	for(i=0;i<n;i++)
		scanf("%lf",a+i);
	getchar();
	if(k==1)
	{
		sort(a,a+n);
		printf("%lf\n",a[n-1]);
		return 0;
	}
	m=n-k;
	for(i=0;i<=m;i++)
	{
		for(d=k;d<k+n-1;d++)
		{
			for(p=0,t=0;t<d;t++)
				p+=a[i+t];
			p/=((double)d);
			//printf("p=%lf\n",p);
			if(p>ans)
			{
				//printf("%lf,%lf\n",p,ans);
				ans=p;
			}
			//if(d>k+10)
			//{
			//	d=k+n-10;
			//	continue;
			//}
		}
	}
	for(p=0,i=0;i<n;i++)
		p+=a[i];
	p/=((double)n);
	if(p>ans)
		ans=p;
	printf("%lf",ans);
}*/
/*#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
double a[100000];
int main()
{
	int n,k,i,m,t,d;
	double ans=-1,p;
	scanf("%d%d",&n,&k);
	getchar();
	for(i=0;i<n;i++)
		scanf("%lf",a+i);
	getchar();
	if(k==1)
	{
		sort(a,a+n);
		printf("%lf\n",a[n-1]);
		return 0;
	}
	m=n-k;
	for(i=0;i<=m;i++)
	{
		for(d=k;d<k+n-1;d++)
		{
			for(p=0,t=0;t<d;t++)
				p+=a[i+t];
			p/=((double)d);
			//printf("p=%lf\n",p);
			if(p>ans)
			{
				//printf("%lf,%lf\n",p,ans);
				ans=p;
			}
			
		}
	}
	for(p=0,i=0;i<n;i++)
		p+=a[i];
	p/=((double)n);
	if(p>ans)
		ans=p;
	printf("%lf",a[-1]);
}*/
