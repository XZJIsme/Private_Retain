// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
const int mod = (int)1e9 + 7, maxn = 200 + 10;
int a[maxn], n, m;
int dp[maxn][maxn][1000 + 10];
int input_int()
{
    int qwe = 0, xyz = 0;
    char get_ch = getchar();
    while (!(get_ch >= '0' && get_ch <= '9'))
        xyz |= get_ch == '-', get_ch = getchar();
    while (get_ch >= '0' && get_ch <= '9')
        qwe = (qwe << 1) + (qwe << 3) + (get_ch ^ 48), get_ch = getchar();
    return xyz ? -qwe : qwe;
}
int main()
{
    // n = input_int();
    // m = input_int();
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
        // a[i] = input_int();
        cin >> a[i];
    // memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    sort(a + 1, a + n + 1);
    dp[0][0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        // system("pause");
        // cout << "i=" << i << endl;
        for (int j = 0; j <= i; j++)
        {
            // if (i == 200)
            //     cout << "j=" << j << endl;
            // system("pause");
            // cout << "j=" << j << endl;
            for (int k = 0; k <= m; k++)
            {
                // if (j == 200 && k == 4)
                // {
                //     system("pause");
                //     // for(int d=0;d<=100;d++) cout<<d<<endl;
                //     system("pause");
                //     cout << "k=" << k << endl;
                // }
                int t = j * (a[i] - a[i - 1]);
                if (k + t > m)
                    continue;
                dp[i][j + 1][k + t] = ((ll)dp[i][j + 1][k + t] + (ll)dp[i - 1][j][k]) % mod;
                dp[i][j][k + t] = ((ll)dp[i][j][k + t] + (ll)dp[i - 1][j][k]) % mod;
                if (j == 0)
                    continue;
                dp[i][j][k + t] = ((ll)dp[i][j][k + t] + (ll)dp[i - 1][j][k] * j) % mod;
                if (j - 1 >= 0)
                    dp[i][j - 1][k + t] = ((ll)dp[i][j - 1][k + t] + (ll)dp[i - 1][j][k] * j) % mod;
            }
        }
        // cout << "i=" << i << endl;
    }
    int ans = 0;
    for (int i = 0; i <= m; i++)
    {
        // cout << dp[n][0][i] << " ";
        ans = ((ll)ans + (ll)dp[n][0][i]) % mod;
    }
    // puts("");
    // cout << ans << endl;
    cout<<ans<<endl;
    // system("pause");
    // puts("!!");
    return 0;
}

// #include <cstdio>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int f[210][210][1010]; //前i个 j个地方可以加数 差值为k
// int n, k;
// int a[210];
// int mod = 1000000007;
// int ans = 0;
// void plu(int &a, long long b)
// {
//     a = (1ll * a + b) % mod;
// }
// int main()
// {
//     scanf("%d%d", &n, &k);
//     for (int i = 1; i <= n; i++)
//         scanf("%d", &a[i]);
//     sort(a + 1, a + 1 + n);
//     f[0][0][0] = 1;
//     for (int i = 1; i <= n; i++)
//         for (int j = 0; j <= i; j++)
//             for (int v = 0; v <= k; v++)
//             {
//                 int cha = a[i] - a[i - 1];
//                 int add = cha * j;
//                 if (add + v > k)
//                     continue;
//                 plu(f[i][j + 1][v + add], f[i - 1][j][v]);
//                 plu(f[i][j][v + add], f[i - 1][j][v]);
//                 if (j)
//                 {
//                     plu(f[i][j][v + add], 1ll * f[i - 1][j][v] * j);
//                     plu(f[i][j - 1][v + add], 1ll * f[i - 1][j][v] * j);
//                 }
//             }
//     for (int i = 0; i <= k; i++)
//         ans = (1ll * ans + f[n][0][i]) % mod;
//     printf("%d\n", ans);
// }