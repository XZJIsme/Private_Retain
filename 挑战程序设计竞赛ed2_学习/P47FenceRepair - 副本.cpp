#include<iostream>
#include<queue>
using namespace std;
int main()
{
	long long N,i=0,ans,a,b;
	cin>>N;
	priority_queue 
	<int,vector<int>,greater<int>> que;
	for(;i<N;i++)
	{
		cin>>ans;
		que.push(ans);
	}
	for(ans=0;N>1;N--)
	{
		a=que.top();
		que.pop();
		b=que.top();
		que.pop();
		ans+=a+b;
		que.push(a+b);
	} 
	cout<<ans<<endl;
	return 0;
} 
