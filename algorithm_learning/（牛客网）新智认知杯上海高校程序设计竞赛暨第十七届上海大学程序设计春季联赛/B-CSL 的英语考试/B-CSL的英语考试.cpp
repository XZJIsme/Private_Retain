#include <bits/stdc++.h>
using namespace std;
map<char, int> dic;
void solve(string a, string b)
{
    int i = 0;
    if (a == b)
    {
        puts("=");
        return;
    }
    while (a[i] && b[i])
    {
        if (dic[a[i]] == dic[b[i]])
        {
            i++;
            continue;
        }
        if (dic[a[i]] > dic[b[i]])
        {
            puts(">");
            return;
        }
        else
        {
            puts("<");
            return;
        }
    }
    if (a.length() > b.length())
    {
        puts(">");
    }
    else
    {
        puts("<");
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < 26; i++)
    {
        char input;
        cin >> input;
        dic[input] = i;
    }
    getchar();
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        getchar();
        solve(a, b);
    }
    return 0;
}