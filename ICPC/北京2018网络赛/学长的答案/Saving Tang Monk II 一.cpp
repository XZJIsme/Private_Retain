#include <bits/stdc++.h>
using namespace std;


struct Node {
    int x, y;
    int b;
    int d;
    Node(int x, int y, int b, int d) :
        x(x), y(y), b(b), d(d) {}
    bool operator < (const Node &rhs) const {
        return d > rhs.d;
    }
};

const int d[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const int maxn = 100 + 1;
// x, y, b, d
int vis[maxn][maxn][6];

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 and m == 0) break;
        vector<string> mat(n);
        int sx = -1, sy = -1;
        int tx = -1, ty = -1;
        for (int i = 0; i < n; i++) {
            cin >> mat[i];
            for (int j = 0; j < m; j++) {
                for (int k = 0; k <= 5; k++) {
                    vis[i][j][k] = 0;
                }

                if (mat[i][j] == 'S') {
                    sx = i;
                    sy = j;
                } else if (mat[i][j] == 'T') {
                    tx = i;
                    ty = j;
                }
            }
        }
        priority_queue<Node> Q;
        Q.emplace(sx, sy, 0, 0);
        vis[sx][sy][0] = true;
        int flag = false;
        while (not Q.empty()) {
            Node cur = Q.top(); Q.pop();
            if (mat[cur.x][cur.y] == 'T') {
                flag = true;
                cout << cur.d << endl;
                break;
            }

            for (int i = 0;  i < 4; i++) {
                int nx = cur.x + d[i][0];
                int ny = cur.y + d[i][1];
                if (nx < 0 or nx >= n or ny < 0 or ny >= m) continue;
                if (mat[nx][ny] == 'B') {
                    auto &ref = vis[nx][ny][min(5, cur.b + 1)];
                    if (not ref) {
                        ref = true;
                        Q.emplace(nx, ny, min(5, cur.b + 1), cur.d + 1);
                    }
                } else if (mat[nx][ny] == 'P') {
                    auto &ref = vis[nx][ny][cur.b];
                    if (not ref) {
                        ref = true;
                        Q.emplace(nx, ny, cur.b, cur.d);
                    }
                } else if (mat[nx][ny] == '#') {
                    if (cur.b > 0) {
                        auto &ref = vis[nx][ny][cur.b - 1];
                        if (not ref) {
                            ref = true;
                            Q.emplace(nx, ny, cur.b - 1, cur.d + 2);
                        }
                    }
                } else {
                    auto &ref = vis[nx][ny][cur.b];
                    if (not ref) {
                        ref = true;
                        Q.emplace(nx, ny, cur.b, cur.d + 1);
                    }
                }
            }
        }
        if (not flag) cout << -1 << endl;
    }

}

