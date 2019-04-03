// // #include <bits/stdc++.h>
// // #include <numeric>
// // using ll = long long;
// // using namespace std;
// // int main()
// // {
// //     // // for(int i=0;i<(1<<6);i++)   //枚举第一行按钮的状态
// //     // // {
// //     // //     int k=i;      //这行运用了状态压缩的思想，将每一个状态压缩成整型
// //     // //     for(int j=1;j<=6;j++)
// //     // //     {
// //     // //         cout<<k%2<<" ";    //k二进制表示的每一位表示一个灯的状态
// //     // //         k/=2;
// //     // //     }
// //     // //     //if(check_ans()) break;  //检查该方案是否可以关掉全部的灯
// //     // //     puts("");
// //     // // }
// //     // int a[9];
// //     // cout<<a[10];
// //     ll a = 10e13;
// //     cout << 0x21 << endl;
// //     cout << 0x7E << endl;
// //     return 0;
// // }
 
// #include <iostream>
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// using namespace std;
// int main()
// {char s1[100500],s2[100500];
// int n,i,t,num,j;
// scanf("%d",&t);
// while(t--)
// {
//     cin>>s1>>s2;
//     n=strlen(s1);
//     for(i=0,j=n-1;i<n;i++,j--)
//     {
//         if(s1[i]!=s2[i]&&s1[i]!=s2[j])
//             break;
//     }
//     if(i!=n)
//         printf("-1\n");
//     else
//     {
//         num=0;
//         for(i=0,j=n-1;i<n/2;i++,j--)
//         {
//             if(num%2==0)
//             {
//                 if(s1[i]!=s2[i])
//                     num++;
//             }
//             else
//             {
//                 if(s1[i]!=s2[j])
//                 {
//                     num++;
//                 }
//             }
//         }
//         printf("%d\n",num);
//     }
// }
//     return 0;
// }


#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[1020][1020];
int main()
{
    char a[1020],b[1020];
    scanf("%s%s",a,b);
    int n=strlen(a);
    int m=strlen(b);
    memset(dp,0x3f3f3f,sizeof(dp));
    for (int i=0;i<1010;i++)
        dp[i][0]=dp[0][i]=i;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1;
        }
 
    printf("%d\n",dp[n][m]);
    return 0;
}