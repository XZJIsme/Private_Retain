#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m,L,R;
ll c[1000+10][1000+10];
int main()
{
    memset(c,0,sizeof(c));
    cin>>n>>m>>L>>R;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i][1];
        for(int j=2;j<=m;j++) c[i][j]=c[i][1];
    }
    for(int i=1;i<=m;i++)
    {
        ll b;
        cin>>b;
        for(int j=1;j<=n;j++) c[i][j]*=b;
    }
    
    return 0;
}