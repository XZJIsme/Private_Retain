






// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;
// char a[10][10];     //记录棋盘位置
// int book[10];        //记录一列是否已经放过棋子
// int n,k;
// int total,m;    //total 是放棋子的方案数 ，m是已放入棋盘的棋子数目

// void DFS(int cur)
// {
//     if(k==m)
//     {
//         total++;
//         return ;
//     }
//     if(cur>=n)    //边界

//         return ;
//     for(int j=0; j<n; j++)
//         if(book[j]==0 && a[cur][j]=='#')  //判断条件
//         {
//             book[j]=1;           //标记
//             m++;                 
//             DFS(cur+1);
//             book[j]=0;           //改回来方便下一行的判断
//             m--;
//         }
//     DFS(cur+1);                //到下一行
// }

// int main()
// {
//     int i,j;
//     while(scanf("%d%d",&n,&k)&&n!=-1&&k!=-1) //限制条件
//     {
//         total=0;
//         m=0;
//         for(i=0; i<n; i++)
//             scanf("%s",&a[i]);
//         memset(book,0,sizeof(book));
//         DFS(0);
//         printf("%d\n",total);
//     }
//     return 0;
// }
















#include<vector>
#include<map>
#include<string>
#include<utility>
#include<iostream>
using namespace std;
int n,k,ans,put[8+1],vec_size,put_1[8+1],re=1;  
vector<pair<int,int>> chess_position;
bool is_here_ok(int line,int row)
{ 
    for(int i=0;i<line;i++) 
        if(put[i]==row)
        {
            return false;
        } 
    return true;
}
void dfs(int line,int i)
{
    if(line==k)
    {
        ans++;
        // for(int i=0;i<k;i++)
        //     {
        //         cout<<put_1[i]<<","<<put[i]<<endl;
        //     }
        // cout<<endl;
        return;
    } 
    for(;i<vec_size;i++)
    {
        if(chess_position[i].first!=put_1[line-1]||(chess_position[i].first==0&&re))
            if(is_here_ok(line,chess_position[i].second))
            {
                re=0;
                put[line]=chess_position[i].second;//chess_position[i].second;
                put_1[line]=chess_position[i].first;
                dfs(line+1,i+1); 
            }
    }
    re=1;
    return;
}
void solve()
{
    for(int i=0;i<n;i++)
    {
        string input;
        cin>>input;
        getchar();
        for(int j=0;input[j];j++)
            if(input[j]=='#') 
            {
                pair<int,int> res (i,j);
                chess_position.push_back(res);
            }  
    } 
    vec_size=chess_position.size(); 
    dfs(0,0);
    cout<<ans<<endl; 
    return;
}
int main()
{
    while(true)
    {
        cin>>n>>k;
        getchar();
        if(n==-1||k==-1)
            break;
        ans=0;
        solve();
        chess_position.clear(); 
    }
    return 0;
} 





 





















/*#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstdio>
using namespace std; 
int len_vec,num; 
vector<int> visit;
vector<int> res_vec;
vector<vector<int>> ans_vec; 
void dfs(int i){  
    if(i>=num){ 
        vector<int> new_vec;
        for(int j=0;j<num;j++)
            if(visit[j]==1)
                new_vec.push_back(res_vec[j]);  
        ans_vec.push_back(new_vec);
        return;
    }  
    visit[i]=0; 
    dfs(i+1);
    visit[i]=1;
    dfs(i+1);
}  
void solve(int n,int k){ 
    int ans=0;
    vector<int> vec;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        getchar(); 
        int l=0;
        for(int j=0;input[j];j++) if(input[j]=='#') l++; 
        vec.push_back(l);
    } 
    int len_vec=vec.size();
    if(vec.size()<k){
        cout<<"0"<<endl;
        return;
    } 
    num=len_vec; 
    for(int i=1;i<=num;i++)
    {
        visit.push_back(1);
        res_vec.push_back(i);
    } 
    dfs(0);
    for(auto v:ans_vec){
        if(v.size()!=k) continue;
        int res=1;
        for(auto i:v){
            res*=vec[i-1];
        }
        ans+=res;
    }
    cout<<ans<<endl;
    return;
}
int main()
{ 
    int n,k;
    while(true)
    {
        cin>>n>>k;
        getchar();
        if(n==-1||k==-1) break;
        solve(n,k);
    }
    return 0;
}*/



















// #include<vector>
// #include<cstdio>
// #include<cstdlib>
// #include<cmath>
// #include<cstring>
// #include<string>
// #include<algorithm>
// #include<map>
// #include<queue>








































// #include<iostream>
// using namespace std; 
// double n,m,d,x;
// void solve()
// {
//     double a=d*0.5,b=n-d*0.5,c=-m,x1,x2; 
//     double delta=b*b-4*a*c;
//     delta=sqrt(delta);
//     if(a==0)
//     {
//         x1=m/b;
//         x2=x1;
//     }
//     else
//     { 
//         x1=(-b-delta)/(a+a);
//         x2=(-b+delta)/(a+a);
//     } 
//     if(x1<=0&&x2<=0)
//     {
//         cout<<"1"<<endl;
//         return;
//     }
//     double ans=max(x1,x2); 
//     cout<<(long long)ceil(ans)<<endl;
//     return;
// }
// int main()
// {
//     cin>>n>>m>>d>>x;
//     getchar();  
//     solve();
//     return 0;
// }
































 





























