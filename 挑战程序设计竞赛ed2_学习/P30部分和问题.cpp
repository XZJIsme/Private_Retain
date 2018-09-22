#include<iostream>
using namespace std;
int a[20+10],n,k,ans[20+10];
bool dfs(int i,int sum)
{
	if(i==n)
		return sum==k;
	if(dfs(i+1,sum)) 
		return true;
	if(dfs(i+1,sum+a[i]))
		return true;
	return false;
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(dfs(0,0))
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}  
