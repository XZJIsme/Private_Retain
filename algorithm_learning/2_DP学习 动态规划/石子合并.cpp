








#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;
using ll = long long;
const int maxn = 300;
ll n, a[maxn], dp_max[maxn][maxn], dp_mini[maxn][maxn], sum[maxn];
int main()
{
    memset(sum, 0, sizeof(sum));
    memset(dp_max, 0, sizeof(dp_max));
    memset(sum, 0, sizeof(sum));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i + n] = a[i];
    }
    for (int i = 1; i <= 2 * n; i++)
        sum[i] = sum[i - 1] + a[i];
    for (int s = 1; s < n; s++)
    {
        for (int i = 1, j = i + s; i <= 2 * n && j <= 2 * n; i++, j++)
        {
            dp_mini[i][j] = INT_MAX;
            for (int k = i; k < j; k++)
            {
                dp_max[i][j] = max(dp_max[i][j], dp_max[i][k] + dp_max[k + 1][j] + sum[j] - sum[i - 1]);
                dp_mini[i][j] = min(dp_mini[i][j], dp_mini[i][k] + dp_mini[k + 1][j] + sum[j] - sum[i - 1]);
            }
        }
    }
    ll ans1 = dp_mini[1][n];
    ll ans2 = dp_max[1][n];
    for (int i = 1; i + n - 1 <= 2 * n; i++)
    {
        ans1 = min(ans1, dp_mini[i][i + n - 1]);
        ans2 = max(ans2, dp_max[i][i + n - 1]);
    }
    cout << ans1 << endl
         << ans2 << endl;
    return 0;
}

































































// #include <bits/stdc++.h>
// using namespace std;

// int n;
// int a[500];

// int main()
// {
//     cin>>n;
//     for(int i=1;i<=n;i++) {cin>>a[i];a[i+n]=a[i];}

//     int dp[300][300];
//     memset(dp,0,sizeof dp);

//     for(int i=1;;i++){
//         if(i+1>2*n) break;
//         dp[i][i+1]=a[i]+a[i+1];
//     }
//     for(int i=2;i<=2*n;i++){
//         for(int j=1;;j++){
//             if(j+i>2*n) break;
//             dp[j][j+i]=max(dp[j+1][j+i]*2+a[j],dp[j][j+i-1]*2+a[j+i]);
//         }
//     }

//     cout<<dp[1][n]<<endl;
//     return 0;
// }

