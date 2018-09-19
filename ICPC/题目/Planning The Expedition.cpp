#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m,a[100],anum[100],eaten[100],i,k,p,t=0,e,result,day,judge,jiwo;
	for(i=0;i<100;i++)
		eaten[i]=0;
	scanf("%d%d",&n,&m);
	getchar();
	for(i=0;i<m;i++)
		scanf("%d",a+i);
	getchar();
	if(n>m)
	{
		cout<<"0"<<"\n";
		return 0;
	}
	sort(a,a+m);
	//for(int jiwo=0;jiwo<m;jiwo++)
	//	cout<<a[jiwo]<<' ';
	//puts("");
	for(e=a[0],i=0,anum[0]=0;i<m;i++)
	{
		if(a[i]==e)
		{
			anum[t]++;
		}
		else
		{
			t++;
			e=a[i];
			anum[t]=1;
		}
	}
	if(t+1==1)
	{
		p=t;
		t=anum[0]/n;
		cout<<t<<endl;
		return 0;
	}
	sort(anum,anum+t+1,cmp);
	//for(int jiwo=0;jiwo<=t;jiwo++)
	//	cout<<anum[jiwo]<<' ';
	//puts("");
	//system("pause");
	p=t;
	for(i=2,t=0,result=anum[0],eaten[0]++;i<=n;i++)
	{
		for(k=0,judge=0;k<=t;k++)
		{
			day=anum[k]/(eaten[k]+1);
			if(day>anum[t+1]/(eaten[t+1]+1))
/*2018年8月5日00:09:40，本题在将的 if(day>=anum[t+1]/(eaten[t+1]+1))
                        修改为如上的 if(day>anum[t+1]/(eaten[t+1]+1)) 竟然就过了，真踏马莫名其妙
  疯了！ 
  这……就是算法么！？ 
*/
			{
				eaten[k]++;
				result=day;
				break;
			}
			else if(k==t)
			{
				judge=1;
				break;
			}
		}
		if(judge)
		{
			t++;
			eaten[t]++;
			result=anum[t]/eaten[t];
			if(t==p)
				t=0;
		}
	}
	//for(jiwo=0;jiwo<=p;jiwo++)
	//	cout<<anum[jiwo]<<endl;
	cout<<result<<endl;
	return 0;
}








/*#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m,a[200],anum[200],eaten[200],i,k,p,t=0,e,result,day,judge,jiwo;
	for(i=0;i<100;i++)
		eaten[i]=0;
	scanf("%d%d",&n,&m);
	getchar();
	for(i=0;i<m;i++)
		scanf("%d",a+i);
	getchar();
	if(n>m)
	{
		cout<<"0"<<"\n";
		return 0;
	}
	sort(a,a+m);
	for(int jiwo=0;jiwo<m;jiwo++)
		cout<<a[jiwo]<<' '<<'\n';
	puts("");
	system("pause");
	for(e=a[0],i=0,anum[0]=0;i<m;i++)
	{
		if(a[i]==e)
		{
			anum[t]++;
		}
		else
		{
			t++;
			e=a[i];
			anum[t]=1;
		}
	}
	if(t+1==1)
	{
		p=t;
		t=anum[0]/n;
		cout<<t<<endl;
		return 0;
	}
	sort(anum,anum+t+1,cmp);
	for(int jiwo=0;jiwo<=t;jiwo++)
		cout<<anum[jiwo]<<' ';
	puts("");
	system("pause");
	p=t;
	for(i=2,t=0,result=anum[0],eaten[0]++;i<=n;i++)
	{
		for(k=0,judge=0;k<=t;k++)
		{
			day=anum[k]/(eaten[k]+1);
			if(day>=anum[t+1]/(eaten[t+1]+1))
			{
				eaten[k]++;
				result=day;
				break;
			}
			else if(k==t)
			{
				judge=1;
				break;
			}
		}
		if(judge)
		{
			t++;
			eaten[t]++;
			result=anum[t]/eaten[t];
			if(t==p)
				t=0;
		}
	}
	for(jiwo=0;jiwo<=t;jiwo++)
		cout<<eaten[jiwo]<<endl;
	cout<<result<<endl;
	return 0;
}*/
