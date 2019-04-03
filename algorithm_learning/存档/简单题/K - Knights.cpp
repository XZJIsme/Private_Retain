#include<cstdio>
#include<iostream>
using namespace std;
int m[1000][1000];
int main()
{
	int N,M,K;
	cin>>N>>M>>K;
	for(int i=0;i<K;i++)
	{
		int a,b;
		cin>>a>>b;
		m[a][b]=1;
	}
	
	return 0;
 } 
