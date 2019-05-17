#include<bits/stdc++.h>
using namespace std;
using ll=long long;            
int n1,n2,par[(ll)1e6],height[(ll)1e6];
void init(int n)
{
    for(int i=0;i<n;i++) par[i]=i;
    memset(height,0,sizeof(height));
}                                  
int find(int x)
{
    if(par[x]==x) return x; else return par[x]=find(par[x]);
}
void unite(int x,int y)
{                           
    x=find(x);
    y=find(y);
    if(x==y) return;
    if(height[x]<height[y]) par[x]=y;
    else
    {
        par[y]=x;
        if(height[x]==height[y]) height[x]++;
    }
}
bool same(int x,int y)
{   
    return find(x)==find(y);
}
int main()
{                    
    int T;
    cin>>T;
    for(int e=1;e<=T;e++)
    {                            
        scanf("%d%d",&n1,&n2);
        init(n1*5);
        bool ans=false;
        for(int i=0;i<n2;i++)
        {     
            int a,b;
            scanf("%d%d",&a,&b); 
            a--;
            b--;
            // if(same(a,b)&&height[a]==height[]) ans=true;
            // else unite(a,b); 
            // if(find(b)==0||find(b)==n1*3) swap(a,b); 
            // if(same(a,b)||same(a+n1,b+n1)||same(a+n1*2,b+n1*2)||same(a+n1*3,b+n1*3)) ans=true;
            // else
            // {
            //     unite(0,a);
            //     unite(n1,b+n1);
            //     unite(n1*2,b+n1*2);
            //     unite(n1*3,a+n1*3);  
            // } 
            if(!ans)
            {
                unite(a,b+n1);
                unite(b,a+n1); 
                if(same(a,a+n1)||same(b,b+n1)) ans=true;
            }
        } 
        cout<<"Scenario #"<<e<<":"<<endl;
        if(ans) cout<<"Suspicious bugs found!"<<endl<<endl;
        else cout<<"No suspicious bugs found!"<<endl<<endl;
    }
    return 0;
}













// #include<cstdio>
// #define N 2005
// using namespace std;
// int f[N],rank[N], n, k;
// bool flag;
 
// inline void init(){
//     flag=false;
//     for(int i=0; i<=n; ++i)
//         f[i]=i, rank[i]=0;
// }
// int find(int x){
//     if(x==f[x])return f[x];
//     int t=find(f[x]);
//     rank[x] = (rank[f[x]]+rank[x])&1;
//     f[x]=t;
//     return f[x];
// }
// void Union(int x, int y){
//     int a=find(x), b=find(y);
//     if(a==b){
//         if(rank[x]==rank[y])
//             flag=true;
//         return;
//     }
//     f[a]=b;
//     rank[a] = (rank[x]+rank[y]+1)&1;
// }
 
 
// int main(){
//     int T,a,b,cas=1;
//     scanf("%d",&T);
//     while(T--){
//         scanf("%d%d",&n,&k);
//         init();
//         for(int i=0; i<k; ++i){
//             scanf("%d%d",&a,&b);
//             if(flag)continue;
//             Union(a,b);
//         }
//         printf("Scenario #%d:\n",cas++);
//         if(flag)printf("Suspicious bugs found!\n");
//         else printf("No suspicious bugs found!\n");
//         printf("\n");
//     }
//     return 0;
// }