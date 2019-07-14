#include<bits/stdc++.h>
using namespace std;
const int L=1e3; //Æ«ÒÆÁ¿
int a[(int)3e3+10][(int)3e3+10],b[(int)3e3+10][(int)3e3+10];
void up(int x,int y,int l)
{
    a[x-l/2][y]++;
    a[x+1][y-l/2-1]--;
    b[x+1][y+l/2+2]++;
    b[x-l/2][y+1]--;
}
void down(int x,int y,int l)
{
    b[x+1][y-l/2+1]++;
    b[x+l/2+1][y+1]--;
    a[x+l/2+1][y]++;
    a[x+1][y+l/2]--;
} 
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    while(q--)
    {
        int opt,x,y,l;
        cin>>opt>>x>>y>>l;
        up(x+L,y+L,l);
        if(opt==1) down(x+L,y+L,l);
    }
    int res=0;
    for(int i=0;i<n+2*L;i++)
    {
        int ans=0;
        for(int j=0;j<m+2*L;j++)
        {
            ans+=a[i][j]+b[i][j];
            if(i>=L+1&&i<=L+n&&j>=L+1&&j<=L+m)res^=ans;
            a[i+1][j-1]+=a[i][j]; 
            b[i+1][j+1]+=b[i][j]; 
        }
    }
    cout<<res<<endl;
    return 0;
}