#include<queue>
#include<cstdio>
using namespace std;
int N,L,A[10000+1],B[10000+1],i,ans=0,pos=0,tank;
priority_queue<int> que;
int main()
{
	scanf("%d%d%d",&N,&L,&tank);
	A[N]=L;B[N]=0;
	for(i=0;i<N;i++) scanf("%d",A+i);
	for(i=0;i<N;i++) scanf("%d",B+i);
	for(i=0;i<N;i++)
	{
		int d=A[i]-pos;
		while(tank-d<0)
			if(que.empty())
			{puts("-1");return 0;}
			else
			{
				if(que.top()!=8)
				tank+=que.top();
				que.pop();
				ans++;
			}
		tank-=d;
		pos=A[i];
		que.push(B[i]);
	}
	printf("%d\n",ans);
	return 0;
 } 
