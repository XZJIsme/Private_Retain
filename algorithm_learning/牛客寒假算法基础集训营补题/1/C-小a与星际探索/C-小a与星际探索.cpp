#include<bits/stdc++.h>
using namespace std;
int p[5000],n,dp[9000],ans=-1;
int solve(int i,int now){
    if(i==n-1){
        if(now!=0&&now>ans) ans=now;
        return now;
    }
    if(dp[now]!=-1) return dp[now];
    for(int j=i+1,res=0;j<n;j++){
        if(p[i]>p[j]) dp[now]=max(solve(j,now^p[j]),res);
    }
    return 0;
}
int main(){  
    memset(dp,-1,sizeof(dp));
    cin>>n; 
    for(int i=0;i<n;cin>>p[i],i++);  
    solve(0,p[0]); 
    cout<<ans<<endl; 
    return 0;
}
 