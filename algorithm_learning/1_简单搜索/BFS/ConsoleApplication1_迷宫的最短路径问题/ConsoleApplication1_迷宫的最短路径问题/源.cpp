#include <iostream>
#include<bits/stdc++.h> 
using namespace std;


queue<pair<int,int>> que;
int maze[5 + 10][5 + 10];
string ans;
int shortest_ans=5*5+100; 

bool if_here_is_to_be_marked(int x,int y){
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    int r=0;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0) if(nx<5) if(ny>=0) if(ny<5){
            if(maze[nx][ny]==0) r++;
        }
    }
    cout<<r<<endl;
    if(r<=1) return true;
    else return false; 
}

void solve(string s,int t,int x,int y) {
    if(x==4,y==4){
        if(t<shortest_ans) {
            shortest_ans=t;
            ans=s;
        }
        return;
    }
    system("pause");
    if(if_here_is_to_be_marked(x,y)) maze[x][y]=1;

    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};

    for(int i=0;i<4;i++) {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0) if(nx<5) if(ny>=0) if(ny<5){
            if(maze[nx][ny]!=1) solve(s+"("+(char)('0'+nx)+","+(char)('0'+ny)+")\n",t+1,nx,ny);
        }
    }
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> maze[i][j];
        getchar();
    }
    cout<<if_here_is_to_be_marked(0,0);
    solve("(0,0)\n",0,0,0);
    cout<<ans<<endl;
    return 0;
}