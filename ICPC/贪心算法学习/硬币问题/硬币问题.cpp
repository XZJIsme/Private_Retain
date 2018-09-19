#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
long long min_customversion(long long a,long long b) {if(a>b) return b; else return a;}
#define minc(a,b) min_customversion(a,b);
bool cmp(int a,int b) {return a>b;}
int main()
{
	long long i,V[6]={1,5,10,50,100,500},A,C[6],ans,t;
	sort(V,V+6,cmp);
	for(A=0;A<6;A++) cin>>C[A]; getchar(); cin>>A; getchar();
	for(ans=0,i=0;i<6;i++) {t=minc(A/V[i],C[i]); A-=t*V[i]; ans+=t;}
	cout<<ans<<endl; return 0;
}
