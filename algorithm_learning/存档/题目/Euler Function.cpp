#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
struct paper
{
	int a;
	int b;
	int num;
};
struct paper A[100]; int h[500];
bool cmp(struct paper a,struct paper b)
{
	return a.num<b.num;
}
int main()
{
	long long T,n,m,i;
	long long w;
//	scanf("%d",&T);
cin>>T;
	getchar();
	while(T--)
	{cin>>n>>m;
	//	scanf("%d%d",&n,&m);
		getchar();long long atns,ii,iii;
		for(i=0;i<n;i++)
		{
		//	scanf("%d%d",&ii,&iii);
			cin>>ii>>iii;
			getchar();h[i]=ii+iii;
		}
		sort(h,h+n);
		//for(i=0;i<n;i++)
		//{
		//	printf("%d %d %d\n",A[i].a,A[i].b,A[i].num);
		//}
		for(i=0,w=1;i<n;i++)
		{
			w*=h[i];atns=i;
			if(w>m)
			{
				i--;atns=i;cout<<atns+1<<','<<i+1<<endl;
				break;
			}cout<<atns+1<<','<<i+1<<endl;
		}puts("");
		if(atns==i)
		cout<<atns+1<<endl;else
		{
			
			cout<<atns+1<<','<<i+1<<endl;
		}
	}
	return 0;
}
