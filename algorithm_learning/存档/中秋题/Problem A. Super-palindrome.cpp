#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int check(char a)
{
	if(a>='a')
		if(a<='z')
			return 1;
	return 0;
}
void solve()
{
	int length=0,ans=0;
	char s[100+10];
	scanf("%s",s);
	map<char,int> a;
	map<char,int> b;
	int num=0;
	a.erase(a.begin(),a.end());
	b.erase(b.begin(),b.end());
	for(int i=0;check(s[i]);i+=2)
	{
		num++;
		a[s[i]]=a[s[i]]+1;
	}
	int maxnum=0;
	for(auto it=a.begin();it!=a.end();it++)
	{
		int m=(it->second);
		if(m>maxnum) maxnum=m;
	}
	ans+=num-maxnum;
	num=0;
	maxnum=0;
	for(int i=1;check(s[i]);i+=2)
	{
		num++;
		b[s[i]]=b[s[i]]+1;
	}
	for(auto it=b.begin();it!=b.end();it++)
	{
		int m=(it->second);
		if(m>maxnum) maxnum=m;
	}
	ans+=num-maxnum;
	cout<<ans<<endl;
	a.clear();
	b.clear();
	int i=0;
	for(;s[i];i++)
	{
		s[i]=NULL;
	}
	s[i]=NULL;
	return;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		solve();
	}
	return 0;
} 
