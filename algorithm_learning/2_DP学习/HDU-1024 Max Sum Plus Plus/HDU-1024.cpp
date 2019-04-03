

#include<bits/stdc++.h>
using namespace std;
int m,n,a[(int)(1e6+1e2)],dp[(int)(1e6+1e2)],maxn[(int)(1e6+1e2)],res;
int main()
{ 
    while(cin>>m>>n)
    {
        memset(dp,0,sizeof(dp));
        memset(maxn,0,sizeof(maxn)); 
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=m;i++)
        {
            res=INT_MIN;
            for(int j=i;j<=n;j++)
            {
                dp[j]=max(dp[j-1]+a[j],maxn[j-1]+a[j]);
                maxn[j-1]=res;
                res=max(res,dp[j]);
            }
        } cout<<res<<endl;
    }
    return 0;
}   



//We have carefully selected several similar problems for you:  1074 1025 1081 1080 1160  

































































// #include<bits/stdc++.h>
// using namespace std;
// int m,n,a[(int)(1e6+1e2)],dp[(int)(1e6+1e2)],maxn[(int)(1e6+1e2)],res;
// int main()
// { 
//     while(cin>>m>>n)
//     {
//         memset(dp,0,sizeof(dp));
//         memset(maxn,0,sizeof(maxn)); 
//         for(int i=1;i<=n;i++) cin>>a[i];
//         for(int i=1;i<=m;i++)
//         {
//             res=INT_MIN;
//             for(int j=i;j<=n;j++)
//             {
//                 if(i==1)
//                 {
// cout<<"j="<<j<<","<<"dp[j-1]+a[j]="<<dp[j-1]<<"+"<<a[j]<<"="<<dp[j-1]+a[j]<<","<<"maxn[j-1]+a[j]="<<maxn[j-1]<<"+"<<a[j]<<"="<<maxn[j-1]+a[j]<<endl;
//                 }
//                 dp[j]=max(dp[j-1]+a[j],maxn[j-1]+a[j]);
//                 maxn[j-1]=res;
//                 res=max(res,dp[j]);
//             }
//             cout<<"dp"<<endl;
//             if(i==1) 
//                 for(int k=1;k<=n;k++)
//                     cout<<dp[k]<<endl;
//         } 
//         cout<<res<<endl;
//     }
//     return 0;
// }


























 














































