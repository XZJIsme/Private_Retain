#include <bits/stdc++.h>
using namespace std;
int dp[1020][1020];
bool cmp(char a, char b)
{
    return a > b;
}
int times(char *b, char *a)
{
    int n = strlen(a);
    int m = strlen(b);
    memset(dp, 0x3f3f3f, sizeof(dp));
    for (int i = 0; i < 1010; i++)
        dp[i][0] = dp[0][i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j]), dp[i][j - 1]) + 1;
        }

    return dp[n][m];
}
int main()
{
    int i, n;
    char a[(int)(1e5 + 10)], b[(int)(1e5 + 10)], a1[(int)(1e5 + 10)], b1[(int)(1e5 + 10)], a2[(int)(1e5 + 10)], b2[(int)(1e5 + 10)];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a1[i] = a[i];
        a2[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b1[i] = b[i];
        b2[i] = b[i];
    }
    sort(a, a + n);
    sort(b1, b1 + n);
    sort(b, b + n, cmp);
    sort(a1, a1 + n, cmp);
    a[n] = '\0';
    b[n] = '\0';
    a1[n] = '\0';
    b1[n] = '\0';
    a2[n] = '\0';
    b2[n] = '\0';
    // int ans1a = 0, ans1b = 0, ans2a = 0, ans2b = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] != a2[i])
    //         ans1a++;
    //     if (b[i] != b2[i])
    //         ans1b++;
    //     if (a1[i] != a2[i])
    //         ans2a++;
    //     if (b1[i] != b2[i])
    //         ans2b++;
    // }
    // if (ans1a > 0)
    //     ans1a--;
    // if (ans1b > 0)
    //     ans1b--;
    // if (ans2a > 0)
    //     ans2a--;
    // if (ans2b > 0)
    //     ans2b--;
    // system("pause");
    // cout<<times(a,a2);


////////////////////////////////////////////////////////////////////
    // cout << min(times(a, a2) + times(b, b2), times(a1, a2) + times(b1, b2)) << endl;
    cout << times(a, a2) + times(b, b2) << endl;

    return 0;
}
