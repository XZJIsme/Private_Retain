#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long long D[100000+100];
int main()
{
	long long M;
	long long ans=0;
	cin>>M;
	for(long long i=0;i<M;i++) 
		cin>>D[i];
	sort(D,D+M);
	for(long long i=0;i<M;i++)
	{ 
		long long ad=D[i]-(i+1);
		if(ad<=0) 
			continue;
		if(ad>=(M-(i+1))) ans+=(M-(i+1));	
		else
		{
			/*if((M-(i+1))>=ad)
				ans+=ad*2;
			else
			{
				ans+=(M-(i+1))*2;
			}*/
			ans+=ad;
		}
	}
	ans*=2;
	cout<<ans<<endl;
	return 0;
} 
