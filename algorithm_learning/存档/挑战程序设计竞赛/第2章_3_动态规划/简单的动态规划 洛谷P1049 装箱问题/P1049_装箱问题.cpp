#include<bits/stdc++.h>
using namespace std;
int V,n,a[30+5],dp[30+5][20000+500],ans=20000+500;
int solve(int i,int v){
    if(i==n){
        if(v<ans) ans=v;
        return ans;
    }
    if(v-a[i]>=0){  
        if(dp[i+1][v-a[i]]==-1) dp[i+1][v-a[i]]=solve(i+1,v-a[i]);
        if(dp[i+1][v]==-1) dp[i+1][v]=solve(i+1,v);
    } 
    else{
        if(dp[i+1][v]==-1) dp[i+1][v]=solve(i+1,v);
    } 
}
int main(){
    // cin>>V;getchar();cin>>n;getchar();
    // for(int i=0;i<n;i++){
    //     cin>>a[i];getchar();
    // }
    // memset(dp,-1,sizeof(dp));
    // solve(0,V);
    // cout<<ans<<endl;
    vector<double> vec;double a;
    while(cin>>a){
        vec.push_back(a);

    }double aaa=0;
    for(auto v:vec){
aaa+=v;
    }cout<<aaa/(double)vec.size();
    return 0;
}