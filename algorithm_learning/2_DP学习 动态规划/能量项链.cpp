
// #include<bits/stdc++.h>
// using ll=long long;
// using namespace std;
// ll n,ans=-999999,a[200+10],dp[200+10][200+10];
// int main(){
//     memset(dp,0,sizeof(dp));
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//         a[i+n]=a[i];
//     }
//     for(int i=1,j=2;j<2*n;i++,j++) dp[i][j]=a[i]*a[j]*a[j+1];

//     for(int i=3;i<=2*n;i++){
//         for(int l=1;l<=2*n;l++){
//             int r=l+i-1;
//             if(r+1>2*n) break;
//             dp[l][r]=max(dp[l][r-1]+a[l]*a[r]*a[r+1],a[l]*a[l+1]*a[r+1]+dp[l+1][r]);
//         }
//     }

//     for(int i=1;i<=n;i++) ans=max(ans,dp[i][i+n-1]);

//     cout<<ans<<endl;
//     // int p,q;
//     // while(cin>>p>>q)cout<<dp[p][q]<<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int n,e[300],s[300][300],maxn=-1;
// int main(){
//     cin>>n;
//     for(int i=1;i<=n;i++){cin>>e[i];e[i+n]=e[i];}
//     //�����ɻ����Ϊ�����ظ��洢һ��
//     for(int i=2;i<2*n;i++){
//         for(int j=i-1;i-j<n&&j>=1;j--){//��i��ʼ��ǰ��
//             for(int k=j;k<i;k++){//k����������������Ļ��ֵ� 
//             // cout<<s[j][i]<<" \n";
//             s[j][i]=max(s[j][i],s[j][k]+s[k+1][i]+e[j]*e[k+1]*e[i+1]);}
//             //״̬ת�Ʒ��̣�max(ԭ������������������+����������+�ϲ�������������  
//             if(s[j][i]>maxn)maxn=s[j][i];//�����ֵ 
//         }
//     } 
//     cout<<maxn;puts("");
//     // int p,q;
//     // while(cin>>p>>q)cout<<s[p][q]<<endl;
//     return 0;
// }
















#include<bits/stdc++.h>

using ll=long long;
using namespace std;

int n;
int a[200+10],dp[200+10][200+10];
int ans=-1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;a[i+n]=a[i],i++) cin>>a[i];
    for(int w=1;w<n;w++){
        for(int i=1,j=i+w;;i++,j=i+w){
            if(j>2*n) break;
            for(int k=i+1;k<=j;k++){
                if(j+1<=2*n){
                    dp[i][j]=max(dp[i][j],dp[i][k-1]+dp[k][j]+a[i]*a[k]*a[j+1]);
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}









































