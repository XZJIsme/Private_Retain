#include<iostream>
#include<cstdio>
using namespace std;
int N,M,ans=5000000;
char m[100+10][100+10];
int dfs(int x,int y,int res)
{
	if(m[y][x]=='T')
	{
		cout<<y<<' '<<x<<endl;
		return res;
	} 
	for(int dx=-1;dx<=1;dx++)
		for(int dy=-1;dy<=1;dy++)
			if(x+dx>=0&&x+dx<M&&y+dy>=0&&y+dy<N)
				dfs(x+dx,y+dy,res);
	return res;
}
int main()
{
	cin>>N>>M;
	if(N==0||M==0) return 0;
	for(int i=0;i<N;i++)
		scanf("%s",m[i]);
	for(int i1=0;i1<N;i1++)
		for(int i2=0;i2<M;i2++)
			if(m[i1][i2]=='S') dfs(i2,i1,ans);
	return 0;
}
