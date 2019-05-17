#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
const int MAXN=50000<<5;
int par[MAXN] ,N,K ;
void init(int n)
{
    for(int i=0;i<n;i++) par[i]=i;
    // memset(height,0,sizeof(height));
}
int find(int x)
{
    if(par[x]==x) return x;
    else return par[x]=find(par[x]);
} 
void unite(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y) return;
    // if(height[y]>height[x]) 
    par[x]=y;
    // else
    // {
    //     par[y]=x;
    //     if(height[x]==height[y]) height[x]++;
    // } 
}
bool same(int x,int y)
{
    return find(x)==find(y);
}
int main()
{   
    cin>>N>>K;
    int ans=0; init(N*3+10);
    for(int i=0;i<K;i++)
    { 
        int D,X,Y;
        scanf("%d %d %d",&D,&X,&Y);
        // cin>>D>>X>>Y;
        X--;
        Y--;
        if(X<0||X>=N||Y>=N||Y<0) 
        { 
            ans++; 
            continue;
        }else
        if(D==1)
        {
            if(same(X,Y+N)||same(X,Y+N+N)) ans++;
            else
            {
                unite(X,Y);
                unite(X+N,Y+N);
                unite(X+N+N,Y+N+N);
                continue;
            } 
            continue;
        }else
        // if(X==Y)
        // {
        //     ans++;
        //     continue;
        // }else
        if(same(X,Y) ||same(X,Y+N*2))
        {
            ans++;
            continue;
        } 
        unite(X,Y+N);
        unite(X+N,Y+N*2);
        unite(X+N+N,Y);
    }
    cout<<ans<<endl;
    return 0;
}
