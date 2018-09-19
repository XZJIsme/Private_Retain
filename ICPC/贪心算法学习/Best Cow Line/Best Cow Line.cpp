/*#include<stdio.h>
void strfun(int n)
{
	char s[n];
	int i,a=0,b=n-1,left=0,check=0;
	for(i=0;i<n;i++) {scanf("%c",&s[i]); getchar();}
	for(;a<=b;left=0,check++)
	{
		for(i=0;a+i<=b;i++)
		{
			if(s[a+i]<s[b-i]) {left=1; break;}
			else if(s[a+i]>s[b-i]) {left=0; break;}
		}
		if(check==80) {printf("\n"); check=0;}
		if(left) printf("%c",s[a++]);
		else printf("%c",s[b--]);
	}
	printf("\n");
	return;
}
int main()
{
	int n;
	scanf("%d",&n); getchar();
	strfun(n);
	return 0;
} */
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
void strfun(int n)
{
	vector<char> s1;
	vector<char> s2;
	char str[n],ans[n+1];
	int i=0,t=0;
	for(;i<n;i++) {scanf("%c",str+i); getchar();}
	for(i=0;i<n;i++) s1.push_back(str[i]);
	for(i=n-1;i>=0;i--) s2.push_back(str[i]);
	for(;(!(s2.empty()))&&t<n&&(!(s1.empty()));t++)
	{
		if(*(s1.begin())!=*(s1.end()-1))
			if(*(s1.begin())<*(s1.end()-1))
			{
				ans[t]=*(s1.begin());
				s1.erase(s1.begin());
				s2.pop_back();
			}
			else
			{
				ans[t]=*(s1.end()-1);
				s1.pop_back();
				s2.erase(s2.begin());
			}
		else if(s1<=s2)
		{
			ans[t]=s1[0];
			s1.erase(s1.begin());
			s2.pop_back();
		}
		else
		{
			ans[t]=*(s2.end()-1);
			s2.erase(s2.begin());
			s1.pop_back();
		}
	}
	ans[t]='\0';
	for(i=0,t=0;ans[t];t++,i++)
		if(i==80)
		{
			i=0;
			printf("\n%c",ans[t]);
		}
		else printf("%c",ans[t]);
	return;
}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	strfun(n);
	puts("");
	return 0;
}

















