#include <bits/stdc++.h>

using namespace std;

const int ne[][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
const int maxn = 100;
char a[maxn][maxn];
bool book[maxn][maxn][6];
int n, m, tx, ty;

struct data {

    int x, y, ox, sp, res;
    data (int x, int y, int ox = 0, int sp = 0, int res = 0) : x(x), y(y), ox(ox), sp(sp), res(res) {}
    bool operator < (const data &t) const {
        return res - sp > t.res - t.sp;
    }
};
void work(int x, int y, int tx, int ty, data t, priority_queue<data> &que) {

    if (a[x][y] == 'P') que.push(data(tx, ty, t.ox + 2, t.sp, t.res + 1));
    if (a[x][y] == 'B' and t.ox < 3) que.push(data(tx, ty, t.ox + 3, t.sp, t.res + 3));
    if (a[x][y] == 'S' or a[x][y] == '.') que.push(data(tx, ty, t.ox + 2, t.sp, t.res + 3));
}
void solve() {

    priority_queue<data> que;
    memset(book, 0, sizeof(book));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = strlen(a[i]) - 1; j >= 0; j--) {
            if (a[i][j] == 'S') que.push(data(i, j)), book[i][j][0] = true;
        }
    }

    while (!que.empty()) {
        data t = que.top(); que.pop();
//        cout << '(' << t.x << ',' << t.y << ')' << t.ox << ' ' << t.sp << ' ' << t.res << endl;
        if (a[t.x][t.y] == 'T') {
            cout << max(0, t.res - t.sp) << endl;
            return;
        }
        for (int i = 0; i < 4; i++) {
            tx = t.x + ne[i][0], ty = t.y + ne[i][1];
            if (tx < 0 or ty < 0 or tx >= n or ty >= m or book[tx][ty][t.ox]) continue;
            book[tx][ty][t.ox] = true;
            if (a[tx][ty] == '#') {
                if (t.ox) que.push(data(tx, ty, t.ox - 1, t.sp, t.res + 2));
            } else if (a[tx][ty] == 'B') {
                que.push(data(tx, ty, min(5, t.ox + 1), t.sp, t.res + 1));
                if (tx and t.ox < 4) work(tx - 1, ty, tx, ty, t, que);
                if (ty and t.ox < 4) work(tx, ty - 1, tx, ty, t, que);
                if (tx != n - 1 and t.ox < 4) work(tx + 1, ty, tx, ty, t, que);
                if (ty != m - 1 and t.ox < 4) work(tx, ty + 1, tx, ty, t, que);
            } else if (a[tx][ty] == 'P') {
                que.push(data(tx, ty, t.ox, t.sp + 1, t.res + 1));
            } else {
                que.push(data(tx, ty, t.ox, t.sp, t.res + 1));
            }
        }
    }
    cout << -1 << endl;
}
int main() {

//    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false), cin.tie(), cout.tie();
    while (cin >> n >> m, n or m) solve();

    return 0;
}
/*
SB###
##P#T
cout << '(' << t.x << ',' << t.y << ')' << t.ox << ' ' << t.sp << ' ' << t.res << endl;
 */
