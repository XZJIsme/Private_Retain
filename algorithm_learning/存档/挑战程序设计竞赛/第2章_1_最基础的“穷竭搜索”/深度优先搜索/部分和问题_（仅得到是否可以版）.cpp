#include<iostream>
#include<vector>
using namespace std;
int n,k,a[22];//vector<int> vec; 
int dfs(int i,int sum)
{
	if(sum)
	return 0;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(dfs(i,a[i]))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0; 
}
































/*int dfs(int i,int sum)
{
	if(i>=n)
	{
		if(sum==k)
			return 1;
		else
			return 0;
	}
	if(dfs(i+1,sum)==1)
		return 1;
	if(dfs(i+1,sum+vec[i])==1)
		return 1;
	return 0;
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int v;
		cin>>v;
		vec.push_back(v);
	}
	while(!vec.empty())
	{
		if(dfs(1,vec[0]))
		{
			cout<<"YES"<<endl;
			return 0;
		}
		vec.erase(vec.begin());
		n--;
	}
	cout<<"NO"<<endl;
	return 0;
}  */
