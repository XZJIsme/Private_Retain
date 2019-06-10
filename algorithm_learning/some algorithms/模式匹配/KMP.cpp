// // #include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<cstring>
// using namespace std;
// int NEXT[(int)1e5];
// void get_next(string t)
// {
// 	NEXT[0] = NEXT[1] = 0;
// 	for(int i=2;i<=t.length();i++)
// 	{
// 		int next_j=NEXT[i-1];
// 		while(next_j)
// 		    if(t[next_j]!=t[i-1])
// 			{
// 				next_j=NEXT[next_j];
// 			}
// 			else break;
// 		if(t[next_j]==t[i-1]) NEXT[i ]=next_j+1;
// 		else NEXT[i]=0;
// 	}
// }
// void KMP(string s,string t)
// {
// 	int ans=0;
// 	int t_pos=0;
// 	get_next(t);
// 	for(int i=0;s[i];i++)
// 	{
// 		if(s[i]==t[t_pos]) t_pos++;
// 		else if(t_pos==0) continue;
// 		else 
// 		{
// 			t_pos=NEXT[t_pos];
// 			i--;
// 		}
// 		if(t_pos==t.length()) ans++;
// 		// if(t_pos==t.length())
// 		// {
// 		// 	cout<<i-t.length()+1;
// 		// }
// 	}
// 	cout<<ans<<endl;
// 	// return -1;
// }
// int main()
// {
// 	// string s,t;
// 	// cin>>s>>t;
// 	// cout<<KMP(s,t);
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s,t;
// 		cin>>s>>t;
// 		KMP(t,s);
// 	}
// 	return 0;
// }



#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int NEXT[(int)1e5];
void get_next(char *t)
{
	NEXT[0] = NEXT[1] = 0;
	int n=strlen(t);
	for(int i=2;i<=n;i++)
	{
		int next_j=NEXT[i-1];
		while(next_j)
		    if(t[next_j]!=t[i-1])
			{
				next_j=NEXT[next_j];
			}
			else break;
		if(t[next_j]==t[i-1]) NEXT[i ]=next_j+1;
		else NEXT[i]=0;
	}
}
void KMP(char *s,char *t)
{
	int n=strlen(t);
	int ans=0;
	int t_pos=0;
	get_next(t);
	for(int i=0;s[i];i++)
	{
		if(s[i]==t[t_pos]) t_pos++;
		else if(t_pos==0) continue;
		else 
		{
			t_pos=NEXT[t_pos];
			i--;
		}
		if(t_pos==n) ans++;
	}
	printf("%d\n", ans);
}
char s[10000+10],t[1000000+10];
int main()
{
	int T;
    scanf("%d", &T);
    while (T--)
    {

        scanf("%s", s);
        scanf("%s", t);
        KMP(t,s);
    }
	return 0;
}