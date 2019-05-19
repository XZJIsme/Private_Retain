#include<iostream>
#include<algorithm>
using namespace std;
int N,r,n=0,m=0,mp[5000+10][5000+10];
int main()
{
    memset(mp,0,sizeof(mp));
    cin>>n>>r;
    for(int i=0;i<N;i++)
    {
        int xi,yi,vi;
        cin>>xi>>yi;
        cin>>mp[xi+1][yi+1];
        n=max(xi,n);
        m=max(yi,m);
    }
    for(int i=1;i<=n+1;i++)
    {
        for(int j=1;j<=m+1;j++)
            mp[i][j]+=mp[i-1][j]+mp[i][j-1]-mp[i-1][j-1];
    }
    int ans=0;
    return 0;
}
