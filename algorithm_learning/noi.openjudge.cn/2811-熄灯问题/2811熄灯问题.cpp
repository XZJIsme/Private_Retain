// #include<bits/stdc++.h>
// using namespace std;
// int a[5][6],ans[5][6],check[5][6];
// int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
// int *p=(int *)ans;
// int *q=(int *)a;
// bool solve(int i){
//     if(i==30){ 
//         for(int j=0;j<5;j++)
//             for(int k=0;k<6;k++){
//                 check[j][k]=a[j][k];
//             }
//         for(int j=0;j<5;j++){
//             for(int k=0;k<6;k++){
//                 if(ans[j][k]){
//                     for(int l=0;l<4;l++){
//                         int x=j+dx[l],y=k+dy[l];
//                         if(x>0&&x<5&&y>0&&y<6){
//                             check[x][y]=!check[x][y];
//                         }
//                     }
//                 }
//             }
//         } 
//         for(int j=0;j<5;j++){
//             for(int k=0;k<6;k++){
//                 if(check[j][k]){
//                     return false;
//                 }
//             }
//         }
//         for(int j=0;j<5;j++){
//             for(int k=0;k<5;k++){
//                 cout<<check[j][k]<<" ";
//             }
//             cout<<check[j][5]<<endl;
//         }
//         return true;
//     }
//     if(*(a+i)){
//         *(p+i)=1;
//         if(solve(i+1)){
//             return true;
//         }
//         *(p+i)=0;
//         if(solve(i+1)){
//             return true;
//         }
//     }
//     else {*(p+i)=0;
//     if(solve(i+1)){
//             return true;
//         }}
//     return false;
// }
// int main(){
//     for(int i=0;i<5;i++)
//         for(int j=0;j<6;j++) 
//             cin>>a[i][j];  
//     solve(0);
//     return 0;
// }





// #include<cstdio>
// using namespace std;
 
// int n;
// int block[7][8],ans[7][8];
 
// //判断当前解是否可行
// bool check_ans()
// {
// 	for(int i=2;i<=6;i++)
// 	{
// 		for(int j=1;j<=6;j++)   //第i行第j列的灯的状态唯一确定 
// 			ans[i][j]=block[i-1][j]^ans[i-1][j]^ans[i-1][j-1]^ans[i-1][j+1]^ans[i-2][j];
// 	}
// 	for(int j=1;j<=6;j++)    //检查最后一行是否全部关闭 
// 		if(ans[6][j]==1) return false;
// 	return true;
// } 
 
// void solve()
// {
// 	for(int i=0;i<(1<<6);i++)   //枚举第一行按钮的状态 
// 	{
// 		int k=i;      //这行运用了状态压缩的思想，将每一个状态压缩成整型 
// 		for(int j=1;j<=6;j++)
// 		{
// 			ans[1][j]=k%2;    //k二进制表示的每一位表示一个灯的状态 
// 			k/=2;
// 		}
// 		if(check_ans()) break;  //检查该方案是否可以关掉全部的灯 
// 	}
// 	for(int i=1;i<=5;i++)
// 	{
// 		for(int j=1;j<=6;j++)  //输出答案 
// 			printf("%d ",ans[i][j]);
// 		printf("\n");
// 	}
// }
 
// int main()
// {
// 	for(int j=1;j<=5;j++)
// 		for(int k=1;k<=6;k++)
// 			scanf("%d",&block[j][k]);  //读入初始状态 
// 	solve();
// 	return 0;
// }













































#include<bits/stdc++.h>
using namespace std;
int a[6+1][6+1],ans[6+1][6+1];
bool solve(int i){
    if(i==7)
    {
        for(int j=1+1;j<=5+1;j++)
        {
            for(int k=0+1;k<6+1;k++) 
            ans[j][k]=a[j-1][k]^ans[j-1][k-1]^ans[j-1][k+1]^ans[j-1][k]^ans[j-2][k]; 
        }
        for(int j=0+1;j<6+1;j++){
            if(ans[5+1][j]) return false;
        }
        return true;
    }
    ans[0+1][i]=0;
    if(solve(i+1)) return true;
    ans[0+1][i]=1;
    if(solve(i+1)) return true;
}
int main(){
    for(int i=0+1;i<5+1;i++)
        for(int j=0+1;j<6+1;j++)
            cin>>a[i][j];
    solve(0+1);
    for(int i=0+1;i<5+1;i++){
        for(int j=0+1;j<6+1;j++){
            if(j!=6)
            cout<<ans[i][j]<<" ";
            else cout<<ans[i][j];
        }
        puts("");
    }
    return 0;
}