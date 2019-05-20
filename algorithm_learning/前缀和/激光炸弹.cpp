#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
// typedef long long int;
unsigned int N,r,n=0,m=0,dp[5000+10][5000+10];
int main()
{
    memset(dp,0,sizeof(dp));
    cin>>N>>r;
    for(int i=0;i<N;i++)
    {
        int xi,yi,vi;
        cin>>xi>>yi;
        cin>>dp[xi+1][yi+1];
        n=max(xi,(int)n);
        m=max(yi,(int)m);
    }
    // if(r==0)
    // {
    //     cout<<"0"<<endl;
    //     return 0;
    // }
    // r=min((int)r,min((int)n,(int)m)+1);
    // cout<<endl;
    // for(int i=0;i<=n+1;i++,cout<<endl)
    //     for(int j=0;j<=m+1;j++)
    //         cout<<dp[i][j]<<" ";
    n=5000;
    m=5000;
    for(int i=1;i<=n+1;i++)
        for(int j=1;j<=m+1;j++)
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
    long long ans=0;
    for(int i=1+r-1;i<=n+1;i++)
        for(int j=1+r-1;j<=m+1;j++)
        {
            // cout<<dp[i][j]<<" ";
            // cout<<"i="<<i<<","<<"j="<<j<<endl;
            ans=max(ans,(long long)(dp[i][j]-dp[i][j-r]-dp[i-r][j]+dp[i-r][j-r]));
        }
    // cout<<endl;
    // for(int i=0;i<=n+1;i++,cout<<endl)
    //     for(int j=0;j<=m+1;j++)
    //         cout<<dp[i][j]<<" ";
    cout<<ans<<endl;
    return 0;
}
