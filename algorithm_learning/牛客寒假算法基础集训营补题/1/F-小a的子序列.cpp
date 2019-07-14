 

#include <bits/stdc++.h>
using namespace std;
using ll =long long;
ll mod = 1e9 + 7, dp[5000 + 10][5000 + 10];
int main()
{
    ll n, v;
    // scanf("%lld%lld",&n,&v);
    cin >> n >> v;
    for (int i = 1; i <= v; i++)
        dp[1][i] = 1;
    // for (int i = 1; i <= v; i++)
    //     dp[1][i] = i;
    for (int i = 2; i <= n; i++)
    {
        ll sum = 1;
        for (int j = 1; j <= v; j++)
        {
            dp[i][j] = (dp[i - 1][j] + sum) % mod;
            sum += dp[i - 1][j] * j;
            sum %= mod;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= v; i++)
    {
        ans += dp[n][i];
        ans %= mod;
    }
    printf("%lld\n",ans);
    // cout << ans << endl;
    return 0;
}