// #include<cstdio>
// #include<iostream>
// #include<string>
// #include<cstdlib>
// #include<map>
// using namespace std;
// int L,R,C,ans=2147483647,s[]={-1,-1,-1};
// string maze[30+5][30+5];
// string ans_track="";

// void solve(map<int,map<int,map<int,int>>> vis,string track,int time,int d,int r,int c)
// {
// // map<int,map<int,map<int,int>>>  vis_new;
// 	if(maze[d][r][c]=='E')
// 	{
// 		if(time<ans){ ans=time; ans_track=track;}

// 		vis.erase(vis.begin(),vis.end());vis.clear();

// 		return;

// 	}
// 	vis[d][r][c]=1;
// 	for(int i=-1;i<=1;i++)
// 	for(int j=-1;j<=1;j++)
// 	for(int k=-1;k<=1;k++)
// 	{
// 		if(d+i>=0 && d+i<L && r+j>=0 && r+j<R && c+k>=0 && c+k<C)
// 		if((i==0&&j==0)||(i==0&&k==0)||(j==0&&k==0))
// 		if(maze[d+i][r+j][c+k]!='#'&&vis[d+i][j+r][k+c]!=1){
// 			cout<<vis[d+i][j+r][k+c]<<endl;
// 			// if(i==1) track+="U";
// 			// if(i==-1) track+="D";if(j==1) track+="S";
// 			// if(j==-1) track+="N";if(k==1) track+="E";
// 			// if(k==-1) track+="W";
// 			solve(vis,track,time+1,d+i,r+j,c+k);
// 			track.pop_back();
// 		}
// 	}
// 		vis.erase(vis.begin(),vis.end());vis.clear();

// 	return;
// }
// void free()
// {
// 	for(int i=0;i<L;i++)
// 		{
// 			for(int j=0;j<R;j++)
// 			{
// 				maze[i][j]="";
// 				maze[i][j].clear();
// 			}
// 		}
// }
// int main()
// {
// 	while(true)
// 	{map<int,map<int,map<int,int>>>  m;
// 		cin>>L>>R>>C; getchar();
// 		if(L==0 && R==0 && C==0) break;
// 		for(int i=0;i<L;i++)
// 		{
// 			for(int j=0;j<R;j++)
// 			{
// 				cin>>maze[i][j]; getchar();
// 				if(s[0]==-1)
// 				    for(int k=0;maze[i][j][k];k++)
// 						if(maze[i][j][k]=='S')
// 						{
// 							s[0]=i; s[1]=j; s[2]=k;
// 							break;
// 						}
// 			}
// 		} solve(m,"",0,s[0],s[1],s[2]);
// 		if(ans!=2147483647)
// 		cout<<"Escaped in "<<ans<<" minute(s)."/*<<endl<<ans_track*/<<endl;
// 		else puts("Trapped!");
// 		ans=2147483647;  /*free();*/getchar();
// 	} return 0;
// }

// // #include<cstdio>
// // #include<iostream>
// // #include<string>
// // #include<cstdlib>
// // using namespace std;
// // int L,R,C,ans=2147483647,s[]={-1,-1,-1};
// // string maze[30+5][30+5];
// // void solve(int time,int d,int r,int c)
// // {
// // 	if(maze[d][r][c]=='E')
// // 	{
// // 		if(time<ans) ans=time; return;
// // 	}
// // 	maze[d][r][c]='#';
// // 	for(int i=-1;i<=1;i++)
// // 	for(int j=-1;j<=1;j++)
// // 	for(int k=-1;k<=1;k++)
// // 	{
// // 		if(d+i>=0 && d+i<L && r+j>=0 && r+j<R && c+k>=0 && c+k<C)
// // 		if((i==0&&j==0)||(i==0&&k==0)||(j==0&&k==0))
// // 		if(maze[d+i][r+j][c+k]!='#') solve(time+1,d+i,r+j,c+k);
// // 	} return;
// // }
// // void free()
// // {
// // 	for(int i=0;i<L;i++)
// // 		{
// // 			for(int j=0;j<R;j++)
// // 			{
// // 				maze[i][j]="";
// // 				maze[i][j].clear();
// // 			}
// // 		}
// // }
// // int main()
// // {
// // 	while(true)
// // 	{
// // 		cin>>L>>R>>C; getchar();
// // 		if(L==0 && R==0 && C==0) break;
// // 		for(int i=0;i<L;i++)
// // 		{
// // 			for(int j=0;j<R;j++)
// // 			{
// // 				cin>>maze[i][j]; getchar();
// // 				if(s[0]==-1)
// // 				    for(int k=0;maze[i][j][k];k++)
// // 						if(maze[i][j][k]=='S')
// // 						{
// // 							s[0]=i; s[1]=j; s[2]=k;
// // 							break;
// // 						}
// // 			} getchar();
// // 		} solve(0,s[0],s[1],s[2]);
// // 		if(ans!=2147483647)
// // 		cout<<"Escaped in "<<ans<<" minute(s)."<<endl;
// // 		else puts("Trapped!");
// // 		ans=2147483647;  free();
// // 	} return 0;
// // }

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    vector<int> mini;
    vector<int> maxn;
    int l, n;
    cin >> l >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        mini.push_back(min(p, l - p));
        maxn.push_back(max(p, l - p));
    }
    getchar();
    sort(mini.begin(), mini.end());
    sort(maxn.begin(), maxn.end());
    cout << mini[n - 1] << " " << maxn[n - 1] << endl;
    mini.clear();
    maxn.clear();
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
        solve();
    return 0;
}