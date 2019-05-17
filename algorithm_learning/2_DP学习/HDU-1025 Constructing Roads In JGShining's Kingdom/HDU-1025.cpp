#include<iostream> 
#include<algorithm>
#include<vector>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std; 
struct struct_0
{
    int a,b;
}a[(int)1e6];
bool cmp(struct_0 l,struct_0 r)
{
    return l.a<r.a;
}
int s[(int)1e6],dp[(int)1e6];
int main()
{
memset(dp,0,sizeof dp);memset(s,0,sizeof s);memset(a,0,sizeof a);
    int n,T=1;
    while(cin>>n)
    {
        getchar();
        cout<<"Case "<<T++<<":"<<endl;
        for(int i=0;i<n;i++) {scanf("%d %d",&a[i].a,&a[i].b);getchar();}
        sort(a,a+n,cmp); 
        for(int i=0;i<n;i++) s[i]=a[i].b;
        int ans=0;
        dp[0]=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]>dp[ans]) dp[++ans]=s[i];
            else if(s[i]<dp[ans])
            {
                *lower_bound(dp,dp+ans,s[i])=s[i];
            }
        }
        ans+=1;
        if(ans==0||ans==1)
        {
            cout<<"My king, at most "<<ans+0+0+0+0+0+555+555-555-555<<" road can be built."<<endl<<endl;
            continue;
        } 
        cout<<"My king, at most "<<ans<<" roads can be built."<<endl<<endl;
    } 
    return 0;
}

