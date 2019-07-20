#include<bits/stdc++.h>
using namespace std;
int t,n,dp[1000][200000],ans=-1;
struct med
{
    int t,v;
}a[1000];
int solve(int i,int tleft)
{
    if(dp[i][tleft]!=-1) return dp[i][tleft];
    if(i==n) return dp[i][tleft]=0;
    int ans1=-1,ans2=-1;
    ans1=solve(i+1,tleft);
    if(tleft>=a[i].t) ans2=solve(i+1,tleft-a[i].t)+a[i].v;
    return dp[i][tleft]=max(ans1,ans2);
}
int main()
{
    cin>>t>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].t>>a[i].v;
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,t)<<endl; 
    return 0;
}