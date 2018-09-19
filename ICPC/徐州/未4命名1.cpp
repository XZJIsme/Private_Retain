/*#include"bits/stdc++.h"
using namespace std;
string str;
int main(){
	int T,n,i,ans,store;
	map<string,pair<int,int>> cat;
	map<string,pair<int,int>>::iterator it;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cat.clear();//system("pause");
		for(i=0;i<n;i++)
		{		
			getline(cin,str,'\n');
			if(!(cat[str].first>0))
			{
				cat[str].first=i+1;
				cat[str].second=i+1;
			}
			else if(i>cat[str].second)
			{
				cat[str].second=i+1;
			}
		}
		for(it=cat.begin(),ans=-1;it!=cat.end();it++)
		{
			store=(it->second).second-(it->second).first;
			store++;
			if(store>ans) ans=store;
			cout<<(it->second).second<<","<<(it->second).first<<endl;
		}cout<<ans<<endl;
	}
	string abc="0";
	printf("\n%d\n",cat[abc].first);
return 0;
}*/
#include<map>
#include<cstdlib>
#include<iostream>
#include<utility>
#include<string>
#include<cstdio>
using namespace std;
void Features_Track()
{
	int n,i,ans=0,retain;
	map<string,pair<int,int>> cat;
	string ret;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		getline(cin,ret);
	//	getchar();
		if(cat[ret].first==0) cat[ret].first=i+1;
		cat[ret].second=i+1;
	}
	auto it=cat.begin();
	for(;it!=cat.end();it++)
	{
	//	cout<<(it->second).first<<endl;
		retain=(it->second).second-(it->second).first+1;
		if(retain>ans)
		ans=retain;
	}
//	system("pause");
	cout<<ans<<endl;
	return;
}
int main()
{
	int T;
	cin>>T;
	while(T--) {Features_Track();}
	return 0; 
} 
