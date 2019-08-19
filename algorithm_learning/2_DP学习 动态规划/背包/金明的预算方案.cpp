#include<bits/stdc++.h>
using namespace std;
using P=pair<int,int>; 
int n,m,dp[3500000];
vector<P> vec[5000];
vector<pair<P,int>> pairs;
int main()
{
    cin>>n>>m;
    int t=0;
    for(int i=1;i<=m;i++)
    { 
        int x,y,z;
        cin>>x>>y>>z;
        if(z==0) vec[i].push_back(P(x*y,x));
        else {pairs.push_back(pair<P,int>(P(x*y,x),z));}
        // system("pause");
    }
    for(auto p:pairs)
    {
        vector<P> temp;
        for(auto v:vec[p.second]) 
        temp.push_back(P(v.first+p.first.first,v.second+p.first.second));
        for(auto add:temp) vec[p.second].push_back(add); 
    }
    for(int i=0;i<5000;i++)
    {
        if(vec[i].empty()) continue;
        // else
        // {
        //     cout<<i<<" ";
        //     for(auto j:vec[i]) cout<<j.first<<","<<j.second<<"; ";
        // }
        // puts("");
        for(int j=n;j>0;j--)
        {
            for(auto k:vec[i])
            {
                if(j-k.second>=0) dp[j]=max(dp[j],dp[j-k.second]+k.first);
                // if(k.second==800) {system("pause");cout<<"800:"<<j<<","<<dp[j]+k.first<<endl;}
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}