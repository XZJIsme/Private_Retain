// #include<string>
// #include<iostream>
// #include<map>
// #include<cstdio>
// #include<vector>

// #include <sstream>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// string s,t,ans="";
// int n,m;
// map<int,map<int,int>> dp;
// void solve(){
//     int ans_test=0;
//     for(int i=0;i<n;i++) 
//         for(int j=0;j<m;j++)
//             if(s[i]==t[j]){
//                 dp[i+1][j+1]=dp[i][j]+1;
//                string a=" ";
//                a[0]=s[i];
//                ans+=a;
//                 ans_test++;
//             }
//             else
//                 dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
//    cout<<dp[n][m]<<endl;
//    cout<<ans<<endl;
//     // // ans_test=0;
//     // int last=0; //错误
//     // for(int i=0;i<n;i++){
//     //     for(int j=last;j<m;j++){
//     //         if(s[i]==t[j]){ ans_test++;last=j+1;j=m+55;}
            
//     //     }
//     // }
//     // cout<<ans_test<<endl;
// }
// int main(){ 
//     while(cin>>s>>t)
//     {getchar();
//     n=s.length();
//     m=t.length();ans="";
//     dp.clear();
//     solve();}
//     return 0;
// }

// // // //逆波兰表达式
// // // // #include<bits/stdc++.h>
// // // using namespace std; 
// // // vector<string> expression;
// // // void split(string str){
// // //     string res="";
// // //     for(int i=0;;i++){
// // //         if(str[i]==' '||str[i]=='\0'){
// // //             expression.push_back(res);
// // //             res="";
// // //             if(str[i]=='\0')
// // //                 break;
// // //             continue;
// // //         }
// // //         res+=str[i];  
// // //     }
// // // }
// // // double solve(string x){
// // //     // cout<<expression[0]<<endl;
// // //     if(!expression.empty())
// // //     {
// // //         expression.erase(expression.begin());
// // //         // cout<<"expression[0]"<<expression[0]<<endl;
// // //         // for(auto i:expression){
// // //         //     cout<<i<<endl;
// // //         // }
// // //     }
// // //     if(x[0]=='+'){
// // //         // cout<<expression[0]<<endl;
// // //         double a= solve(expression[0]);
// // //         // cout<<"a="<<a<<endl;
// // //         // int b= ;
// // //         // cout<<"b="<<b<<endl;
// // //         return a+solve(expression[0]);
// // //     }    
// // //     else if(x[0]=='-')
// // //         return solve(expression[0])-solve(expression[0]);
// // //     else if(x[0]=='*')
// // //         return solve(expression[0])*solve(expression[0]);
// // //     else if(x[0]=='/')
// // //         return solve(expression[0])/solve(expression[0]);
// // //     else
// // //     {
// // //         // cout<<expression[0]<<endl;   
// // //         istringstream iss(x);
// // //         double ret;
// // //         iss>>ret;
// // //          return ret; 
// // //          }
// // // }
// // // int main(){ 
// // //     string input;
// // //     getline(cin,input,'\n'); 
// // //     split(input);   
// // //     // system("pause");
// // //     printf("%f\n",solve(expression[0]));  
// // //     return 0;
// // // }


// // int N,M;
// // struct interval{
// //     int L;
// //     int R;
// // };
// // struct interval a[100000+100];
// // bool cmp(struct interval A,struct interval B){
// //     return A.L<B.R;
// // }
// // int main(){
// //     cin>>N>>M;
// //     getchar();
// //     for(int i=0;i<M;i++){
// //         cin>>a[i].L>>a[i].R;
// //         getchar();
// //     }
// //     sort(a,a+M,cmp);
// //     int last_R=0,last_L=0,res_max=0,ans=0;
// //     for(int i=0;i<M;i++){
// //         if(a[i].L!=last_L){
// //             if(a[i].L<=res_max+1){
// //                 last_L=a[i].L;
// //                 last_R=a[i].R;
// //                 if(a[i].R>res_max){
// //                     res_max=a[i].R;
// //                     ans++;
// //                 }
// //                 continue;
// //             }
// //             else{ 
// //                 cout<<a[i].L<<" "<<res_max+1<<endl;
// //                 cout<<"-1"<<endl;
// //                 return 0;
// //             }}
// //         if(a[i].R>last_R)
// //             last_R=a[i].R;
// //         if(a[i].R>res_max)
// //             res_max=a[i].R;
// //     }
// //     cout<<ans<<endl;
// //     return 0;
// // }
 

#include<map>
#include<bits/stdc++.h>
using namespace std;
map<int,int> test;
void test_map2(map<int,int> t){
    t[99]=10;
    cout<<t[10];
}
void test_map()
{
    map<int,int> t2;
    t2[10]=99;
    test_map2(t2);
    cout<<t2[99];
}
int main(){
    test_map();
    // test[10]=10;
    // test[5]=100;
    // test[3]=999;
    // test[101]=8979;
    // test[1010]=8971119;
    // auto p=test.begin();
    // cout<<p->second;puts("");
    // cout<<(++p)->second;puts("");
    // cout<<(++p)->second;puts("");
    // p=test.end();
    // for(int i=0;i<2;i++) p--;
    // test.erase(test.begin(),p);
    // cout<<test.size();puts("");
    // cout<<test.begin()->second;
}