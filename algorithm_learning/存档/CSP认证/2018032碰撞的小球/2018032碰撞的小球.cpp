#include<iostream>
#include<cstdio>
using namespace std;
struct road
{
	int first;
	int second;
};
struct road a[1000+1];
int main()
{
	int n,L,t,i;
	scanf("%d%d%d",&n,&L,&t);
	getchar();
	for(i=0;i<=L;i++)
	{
		a[i].first=0;
		a[i].second=0;
	}
	for(i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		getchar();
		a[m].first=i+1;
	} 
	while(t--)
	{
		
	}
	return 0;
} 
