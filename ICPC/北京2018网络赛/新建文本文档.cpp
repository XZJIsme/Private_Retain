#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct str{char a[10];};
struct str s[10+5];
bool cmp(struct str a,struct str b)
{return strlen(a.a)<strlen(b.a);}
int main()
{
	int n;
	cin>>n; 
	for(int i=0;i<n;i++) scanf("%s",s[i].a);
	sort(s,s+n,cmp);
	puts("");
	for(int i=0;i<n;i++) printf("%s\n",s[i].a);
	return 0;
}
