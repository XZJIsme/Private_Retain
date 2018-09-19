#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
int N,i,pos,L,tank,ans=0;
struct town {int a;int b;};
struct town stop[10000+1];
bool cmp(struct town a,struct town b)
{return a.a<b.a;}
int main()
{
	cin>>N;
	for(i=0;i<N;i++) cin>>stop[i].a>>stop[i].b;
	cin>>L>>tank;
	for(i=0;i<N;i++) stop[i].a=L-stop[i].a;
	priority_queue<int> que;
	sort(stop,stop+N,cmp);
	stop[N].a=L;stop[N].b=0;
	for(i=0,pos=0;i<=N;i++)
	{
		while((tank-(stop[i].a-pos))<0)
		{
			if(que.empty())
			{cout<<"-1\n";return 0;}
			tank+=que.top();
			que.pop();
			ans++;
		}
		que.push(stop[i].b);
		tank-=(stop[i].a-pos);
		pos=stop[i].a;
	}
	cout<<ans<<endl;
	return 0;
}
