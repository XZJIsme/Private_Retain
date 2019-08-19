// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int n, m;
// struct item
// {
//     int a, b;
// };
// vector<item> a[101];
// int dp[1100];
// int main()
// {
//     memset(dp,0,sizeof(dp));
//     cin >> m >> n;
//     for (int i = 0; i < n; i++)
//     {
//         item v;
//         int c;
//         cin >> v.a >> v.b >> c;
//         a[c].push_back(v);
//     }

//     for (int i=0;i<=100;i++)
//     {
//         if(a[i].size()==0) continue;

//         for(int j=m;j>=0;j--)
//         {
//             int res=dp[j];
//             for(auto k:a[i]){
//                 if(j-k.a>=0){
//                     res=max(dp[j-k.a]+k.b,dp[j]);
//                 }
//             }
//             dp[j]=res;
//         }

//     }
//     for(int i=0;i<=100;i++)if(dp[i]!=0)
//     cout<<dp[i]<<" ";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int cnt[1000];
int t[200][2000];
int dp[2000];

int w[2000], c[2000];

int main()
{

    memset(dp, 0, sizeof(dp));
    memset(t, 0, sizeof(t));
    memset(cnt, 0, sizeof(cnt));

    int n, m;
    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        t[z][cnt[z]++] = i;

        w[i] = x;
        c[i] = y;
    }

    for (int i = 0; i <= 100; i++)
        if (cnt[i])
        {
            for (int j = m; j >= 0; j--)
            {
                for (int k = 0; k < cnt[i]; k++)
                {
                    if (j - w[t[i][k]] < 0)
                        continue;
                    dp[j] = max(dp[j], dp[j - w[(t[i][k])]] + c[t[i][k]]);
                }
            }
        }

    cout << dp[m] << endl;
    return 0;
}