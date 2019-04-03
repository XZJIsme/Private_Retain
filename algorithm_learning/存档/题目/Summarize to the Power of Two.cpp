#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct ai
{int num; int check;};
struct ai a[200000];
bool cmp(struct ai t,struct ai y)
{return t.num<y.num;}
int search(int aim,struct ai *a,int n)
{
	int left=0,right=n-1,mid,det=-1;
	while(left<right)
	{
		mid=(left+right)/2;
		if((a+mid)->num<aim)
		{
			left=mid+1;
		}
		else if((a+mid)->num>aim)
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
int main()
{
	int n,i=0,powtwo[30],ans=0,k=0,aim,t;
	scanf("%d",&n);
	//ans=n;
	getchar();
	for(;i<n;i++) scanf("%d",&a[i].num);
	getchar();
	//for(i=0;i<n;i++) printf("%d ",(a[i].num));
	sort(a,a+n,cmp);
	for(i=1,powtwo[0]=1;i<30;i++)
		powtwo[i]=powtwo[i-1]*2;
	for(i=0;i<n;i++) a[i].check=0;
	if(n==1)
	{
		puts("1");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i].check==0);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].check==1)
		{
			//ans--;
			//printf("%d\n",a[i].num);
			continue;
		}
		for(k=0;k<30;k++)
		{
			aim=powtwo[k]-a[i].num;
			if(aim<=0) continue;
			if(aim>a[n-1].num)
			{
				a[i].check=0;
				//ans++;
				break;
			}
			if(aim==a[i].num)
			{
				for(t=0;t<n;t++)
				{
					if(t!=i&&a[t].num==aim)
					{
						a[t].check=1;
						a[i].check=1;
					}
				}	
				if(a[i].check==1) break;
				else continue;
			} 
			t=search(aim,a,n);
			if(a[t].num==aim&&t!=i)
			{
				//ans--;
				//printf("%d\n",a[i].num);
				a[i].check=1;
				a[t].check=1;
				break;
			}
			else continue;
		}
		if(a[i].check==0) ans++;
	} 
	//for(i=0;i<n;i++) printf("%d ",(a[i].num));
	//printf("\n%d\n",search(5,a,n));
	for(ans=n,i=0;i<n;i++)
	{
		if(a[i].check==1) ans--;
	}
	cout<<ans<<endl;
	return 0;
}
