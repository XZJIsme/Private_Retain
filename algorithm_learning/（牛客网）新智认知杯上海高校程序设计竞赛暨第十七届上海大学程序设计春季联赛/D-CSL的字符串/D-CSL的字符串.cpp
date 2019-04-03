#include <bits/stdc++.h>
using namespace std;
using P = pair<char, int>;
P ans[(int)(1e5 + 10)];
bool cmp(P a, P b)
{
    return a.second < b.second;
}
int main()
{
    char s[(int)(1e5 + 10)];
    cin >> s;
    int sum = 0, t = 0;
    for (int i = 0x21; i <= 0x7E; i++)
    {
        for (int j = 0; s[j]; j++)
        {
            if (s[j] == (char)i)
            {
                ans[t++] = P((char)i, j);
                break;
            }
        }
    }
   // sort(ans, ans + t, cmp);
    for (int i = 0; i < t; i++)
    {
        cout << ans[i].first;
    }
    return 0;
}