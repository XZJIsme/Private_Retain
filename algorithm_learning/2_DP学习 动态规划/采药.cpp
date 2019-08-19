// // ÍêÈ«±³°ü
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     int c[3500];
//     int w[3500];
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//         cin >> c[i] >> w[i];

//     int dp[13000];

//     memset(dp, 0, sizeof(dp));

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = m; j - c[i] >= 0; j--)
//         {
//             dp[j] = max(dp[j], dp[j-c[i]] + w[i]);
//         }
//     }

//     cout<< dp[m] << endl;

//     return 0;
// }


//