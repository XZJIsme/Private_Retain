#include <bits/stdc++.h>
using namespace std;
char str[500000], s[500000];
int dp[500000];
int main()
{
    while (~scanf("%s", str))
    {
        int LEN = 0, ans = 1, pos = 0, maxright = 0;
        dp[0] = 1;
        for (int i = 0;; i++)
        {
            LEN++;
            if (i % 2 == 0)
                s[i] = '#';
            else
            {
                if (str[(i + 1) / 2 - 1] == '\0')
                    break;
                s[i] = str[(i + 1) / 2 - 1];
            }
        }
        for (int i = 1; i <= LEN - 1; i++)
        {
            if (i > maxright)
                for (int j = i, k = i;; j--, k++)
                    if (j >= 0 && k <= LEN - 1 && s[j] == s[k])
                        continue;
                    else
                    {
                        j++;
                        k--;
                        maxright = k;
                        pos = (j + k) / 2;
                        dp[pos] = (k - j) / 2 + 1;
                        break;
                    }
            else
            {
                dp[i] = min(maxright - i + 1, dp[pos - (i - pos)]);
                for (int j = i - dp[i], k = i + dp[i];; j--, k++)
                    if (j >= 0 && k <= LEN - 1 && s[j] == s[k])
                    {
                        dp[i]++;
                        if (k > maxright)
                        {
                            maxright = k;
                            pos = i;
                        }
                    }
                    else
                        break;
            }
            ans = max(ans, dp[i]);
        }
        cout << ans - 1 << endl;
    }
    return 0;
}

////O(n*n) 暴力
// #include<bits/stdc++.h>
// using namespace std;
// string s;
// int main()
// {
//     while(cin>>s)
//     {
//         int ans=0;
//         for(int i=0,res=0;i<s.length();i++)
//             for(int l=i,r=i;;l--,r++)
//                 if(s[l]==s[r]&&l>=0&&r<s.length())
//                     res=r-l+1;
//                 else
//                 {
//                     ans=max(res,ans);
//                     break;
//                 }
//         for(int i=0,res=0;i<s.length();i++)
//             for(int l=i,r=i+1;;l--,r++)
//                 if(s[l]==s[r]&&l>=0&&r<s.length())
//                     res=r-l+1;
//                 else
//                 {
//                     ans=max(res,ans);
//                     break;
//                 }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
////然而显然是不行的
