#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int i,N,L[20000],len=0,ans=0;
priority_queue<int> que;
int main()
{
	cin>>N;
	for(i=0;i<N;i++)
	{
		scanf("%d",L+i);
		que.push(L[i]);
		len+=L[i];
	}
	/*if(N==1)
	{
		puts("0");
		return 0;
	}*/
	while(len!=que.top())
	{
		ans+=len;
		len-=que.top();
		que.pop();
	}
	cout<<ans<<endl;
	return 0;
} 
