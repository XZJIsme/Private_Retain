#include <bits/stdc++.h>

using namespace std;

const int maxn = 15;
string a[maxn];
int len[maxn], n;
vector<string> res;

bool check(string &x) {

    for (int i = 1; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < len[i]; j++) {
            int id = 0;
            for (int k = j; k < j + len[i]; k++) {
                if (id == x.length()) break;
                if (a[i][k] == x[id]) id++;
            }
            if (id == x.length()) {
                flag = true;
                break;
            }
        }
        if (!flag) return false;
    }
    return true;
}
void solve() {

    res.clear();
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        len[i] = a[i].length();
        for (int j = 0; j < len[i] - 1; j++) a[i] += a[i][j];
    }
    if (n == 1) {
        for (int i = 0; i < len[0]; i++) {
            res.push_back(a[0].substr(i, len[0]));
        }
        sort(res.begin(), res.end());
        cout << *res.begin() << endl;
        return;
    }

    for (int i = 0; i < len[0]; i++) {      //a[0]×Ó´® [i, i + len[0])
        for (int j = 0; j < (1 << len[0]); j++) {
            string tmp;
            for (int k = 0; k < len[0]; k++) {
                if (j & (1 << k)) tmp += a[0][i + k];
            }
            if (check(tmp) and !tmp.empty()) res.push_back(tmp);
        }
    }
    for (auto &p : res) {
        for (int i = 1; i < p.length(); i++) {
            res.push_back(p.substr(i, p.length() - i) + p.substr(0, i));
        }
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());

//    for (auto &p : res) {
//        cout << p << ' ';
//    } cout << endl;

    int maxlen = 0;
    string ans;
    for (auto &p : res) {
        if (maxlen < p.length()) {
            maxlen = p.length();
            ans = p;
        }
    }
    for (auto &p : res) {
        if (p.length() == maxlen) ans = min(ans, p);
    }
    if (res.empty()) cout << 0 << endl;
    else cout << ans << endl;
}
int main() {

//    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false), cin.tie(), cout.tie();
    while (cin >> n) solve();

    return 0;
}
