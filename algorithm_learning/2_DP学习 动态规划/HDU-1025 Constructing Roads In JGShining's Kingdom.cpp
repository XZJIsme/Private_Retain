#include <bits/stdc++.h>
using namespace std;
struct cities
{
    int p, r;
} a[500000 + 10];
bool cmp(cities a_, cities b_) { return a_.p < b_.p; }
int dp[500000 + 10];
int bin_search(int l, int r, int n)
{
    if (r - l < 5)
        for (int i = l;; i++)
            if (dp[i] > n)
                return i;
    if (n > dp[(l + r) / 2])
        return bin_search((l + r) / 2, r, n);
    if (n < dp[(l + r) / 2])
        return bin_search(l, (l + r) / 2, n);
    if (n == dp[(l + r) / 2])
        return (l + r) / 2;
}
int main()
{
    // ios::sync_with_stdio(false);
    int cases = 1, n;
    while (cin >> n)
    {
        cout << "Case " << cases++ << ":\n";
        for (int i = 0; i < n; i++)
            cin >> a[i].p >> a[i].r;
        sort(a, a + n, cmp);
        int ans = 0;
        dp[0] = a[0].r;
        for (int i = 1; i < n; i++)
        {
            if (a[i].r > dp[ans])
                dp[++ans] = a[i].r;
            else
                dp[bin_search(0, ans, a[i].r)] = a[i].r;
        }
        if (ans + 1 == 1)
            cout << "My king, at most " << ans + 1 << " road can be built." << endl
                 << endl;
        else
            cout << "My king, at most " << ans + 1 << " roads can be built." << endl
                 << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// struct cities0
// {
//     int a, b;
// } a[(int)1e6];
// bool cmp(cities0 a_, cities0 b_)
// {
//     return a_.a < b_.a;
// }
// int s[(int)1e6], dp[(int)1e6];

// int bin_search(int l, int r, int n)
// {
//     if (r - l < 50)
//         for (int i = max(0,l-10);; i++)
//             if (dp[i] > n)
//                 return i;
//     if (n > dp[(l + r) / 2])
//         return bin_search((l + r) / 2, r, n);
//     else
//     // if (n < dp[(l + r) / 2])
//         return bin_search(l, (l + r) / 2, n);
//     // if (n == dp[(l + r) / 2])
//     //     return (l + r) / 2;
// }
// int main()
// {
//     memset(dp, 0, sizeof dp); memset(s, 0, sizeof s); memset(a, 0, sizeof a);
//     int wolegecaonima = 1, n;
//     while (cin >> n)
//     {
//         getchar();
//         cout << "Case " << wolegecaonima++ << ":" << endl;
//         for (int i = 0; i < n; i++)
//         {
//             // cin >> a[i].p >> a[i].r;
//             scanf("%d%d", &a[i].a, &a[i].b); getchar();
//         }
//         sort(a, a + n, cmp);
//         for (int i = 0; i < n; i++)
//             s[i] = a[i].b;
//         int ans = 0;
//         dp[0] = s[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (s[i] > dp[ans]) dp[++ans] = s[i];
//             else if (s[i] < dp[ans])
//             {
//                 dp[bin_search(0, ans, s[i])] = s[i];
//                 // *lower_bound(dp, dp + ans, s[i]) = s[i];
//             }
//         }
//         ans += 1;
//         if (ans == 0 || ans == 1)
//         {
//             cout << "My king, at most " << ans << " road can be built." << endl
//                  << endl;
//             continue;
//         }
//         cout << "My king, at most " << ans << " roads can be built." << endl
//              << endl;
//     }
//     return 0;
// }

// // #include <iostream>
// // #include <algorithm>
// // #include <vector>
// // #include <cstdio>
// // #include <bits/stdc++.h>
// // using namespace std;
// // struct struct_0
// // {
// //     int a, b;
// // } a[(int)1e6];
// // bool cmp(struct_0 l, struct_0 r)
// // {
// //     return l.a < r.a;
// // }
// // int s[(int)1e6], dp[(int)1e6];
// // int main()
// // {
// //     memset(dp, 0, sizeof dp);
// //     memset(s, 0, sizeof s);
// //     memset(a, 0, sizeof a);
// //     int n, T = 1;
// //     while (cin >> n)
// //     {
// //         getchar();
// //         cout << "Case " << T++ << ":" << endl;
// //         for (int i = 0; i < n; i++)
// //         {
// //             scanf("%d %d", &a[i].a, &a[i].b);
// //             getchar();
// //         }
// //         sort(a, a + n, cmp);
// //         for (int i = 0; i < n; i++)
// //             s[i] = a[i].b;
// //         int ans = 0;
// //         dp[0] = s[0];
// //         for (int i = 1; i < n; i++)
// //         {
// //             if (s[i] > dp[ans])
// //                 dp[++ans] = s[i];
// //             else if (s[i] < dp[ans])
// //             {
// //                 *lower_bound(dp, dp + ans, s[i]) = s[i];
// //             }
// //         }
// //         ans += 1;
// //         if (ans == 0 || ans == 1)
// //         {
// //             cout << "My king, at most " << ans << " road can be built." << endl
// //                  << endl;
// //             continue;
// //         }
// //         cout << "My king, at most " << ans << " roads can be built." << endl
// //              << endl;
// //     }
// //     return 0;
// // }
