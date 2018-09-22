#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
const ll maxn = 1000000 + 100;
const ll INF = 0x3f3f3f3f;
ll a[1000000+100], b[1000000+100];
ll n, m, c;
ll su[1000000+100];

ll qmin[maxn], vmin[maxn], hmin = 1, tmin = 0;
void Min(ll a, ll i) {  //第i个元素a入队 
    while(hmin<=tmin && vmin[hmin] <= i-n) hmin++;  //超范围队首出队
    //while(hmin<=tmin && qmin[tmin]>=a) tmin--; //不符合要求队尾出列
    ll l = hmin, r = tmin;
    while(l <= r) {
        ll m = l+(r-l)/2;
        if(qmin[m] >= a) r = m - 1;
        else l = m + 1;
    }
    tmin = ++r;
    qmin[tmin] = a;
    vmin[tmin] = i;
}

int solve() {
    //freopen("input.txt", "r", stdin);
    memset(su, 0, sizeof(su));
    memset(qmin, 0, sizeof(qmin));
    memset(vmin, 0, sizeof(vmin));
    hmin = 1, tmin = 0;
    for(ll i = 1; i <= n; i++) {
        su[i] = su[i-1] + a[i];
    }

    for(int i = 1; i < n; i++) Min(su[i], i);
    for(int i = n; i <= 2*n; i++) {
        if(i == 2 * n) return -1;
        Min(su[n]+su[i-n], i);
        if(qmin[hmin]-su[i-n]+c >= 0) return i-n+1;
    }
}

int main() {
//    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ncase;
    cin >> ncase;

    while(ncase --) {
        cin >> n >> c;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
            a[i] -= b[i];
        }

        cout << solve() << endl;
    }
}

