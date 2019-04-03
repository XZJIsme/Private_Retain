#include<cstdio>
#include<iostream>
using namespace std;
void bag(int N,int V)
{
	int value[N],volume[N],i;
	for(i=0;i<N;i++) {scanf("%d",value+i);} getchar();
	for(i=0;i<N;i++) {scanf("%d",volume+i);} getchar();
	if(V==0) {puts("0"); return;}
	
}
int main()
{
	int T,N,V;
	cin>>T; getchar();
	while(T--) {cin>>N>>V; getchar(); bag(N,V);}
	return 0;
} 

