// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // bool test1()
// // // {
// // //     return !!(!true-1);
// // // }
// // // bool test2()
// // // {
// // //     cout<<"!"<<endl;
// // //     return true;
// // // }
// // // int main()
// // // {
// // //     if(test1()||test2());
// // //     return 0;
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // map<double,int> dic;
// // int ans,mod=(int)10e9+7;
// // void dfs(double n)
// // {
// //     if(n<0) return;
// //     if(n==0&&++ans) ans%=mod;
// //     else
// //     {
// //         for(auto i:{0.01,0.02,0.05})
// //             for(auto j:{1,10,100})
// //                 dfs(n-i*j);
// //         dfs(n-100);
// //     }
// //     return;
// // }
// // int main()
// // {
// //     int T;
// //     cin>>T;
// //     dic[1]=
// //     while(T--)
// //     {
// //         double n;
// //         cin>>n;
// //         ans=0;
// //         dfs(n);
// //         cout<<ans<<endl;
// //     }
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<cstring>
// #include<cstdio>
// using namespace std;
// int NEXT[1000000+10],a[10000+10],b[1000000+10],n,m;
// void get_next(int *t)
// {
// 	// memset(NEXT,0,sizeof(NEXT));
//     NEXT[0] = NEXT[1] = 0;
// 	for(int i=2;i<=m;i++)
// 	{
// 		int next_j=NEXT[i-1];
// 		while(next_j)
// 		    if(t[next_j]!=t[i-1])
// 			    next_j=NEXT[next_j];
//             else break;
// 		if(t[next_j]==t[i-1]) NEXT[i]=next_j+1;
//         else NEXT[i]=0;
// 	}
// }
// // void get_next(int *temp) {
// //     // memset(NEXT,0,sizeof(NEXT));
// //     NEXT[0] = NEXT[1] = 0; //边界
// //     for(int i = 1; i < m; ++i) {
// //         int j = NEXT[i];
// //         while(j && temp[i] != temp[j]) j = NEXT[j]; //一旦回到1，表明窗口大小为0了，只能回到最初的字符
// //         NEXT[i + 1] = temp[i] == temp[j] ? j + 1: 0;
// //     }
// // }
// int KMP(int *s,int *t)
// {
// 	int t_pos=0;
// 	get_next(t);
// 	for(int i=0;i<n;i++)
// 	{
// 		if(s[i]==t[t_pos]) t_pos++;
// 		else if(t_pos==0) continue;
// 		else 
// 		{
// 			t_pos=NEXT[t_pos];
// 			i--;
// 		}
// 		if(t_pos==m) return i-m+2;
// 	}
// 	return -1;
// }
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//         scanf("%d%d",&n,&m);
//         getchar();
//         for(int i=0;i<n;i++) scanf("%d",a+i);
//         getchar();
//         for(int i=0;i<m;i++) scanf("%d",b+i);
//         getchar();
//         cout<<KMP(a,b)<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void process(const char *temp, int *f)
{
    int n = strlen(temp);
    f[0] = f[1] = 0; //边界
    for (int i = 1; i < n; ++i)
    {
        int j = f[i];
        while (j && temp[i] != temp[j])
            j = f[j]; //一旦回到1，表明窗口大小为0了，只能回到最初的字符
        f[i + 1] = temp[i] == temp[j] ? j + 1 : 0;
    }
}
void findstr(const char *str, const char *temp, int *f)
{
    int ans = 0;
    int n = strlen(str), m = strlen(temp);
    process(temp, f); //预处理得到失配表
    int j = 0;        //j表示当前模版串的待匹配位置
    for (int i = 0; i < n; ++i)
    {
        while (j && str[i] != temp[j])
            j = f[j]; //不停的转移，直到可以匹配或者走到0
        if (str[i] == temp[j])
            j++; //如果相等，模版串中待匹配位置可以移一位了。
        if (j == m)
            ans++;
    }
    printf("%d\n", ans);
}

int NEXT[10000 + 10];
char s[10000 + 99], t[1000000 + 10];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {

        scanf("%s", s);
        scanf("%s", t);
        findstr(t, s, NEXT);
    }
    return 0;
}