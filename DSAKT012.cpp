#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 100005

int a[40], s;
int n, res = INT_MAX;

void init() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Try(int i, int sum, int cnt) {
    if (i > n || sum > s || cnt > res) return;
    if (i == n) {
        if (sum == s) res = min(res, cnt);
        return;
    }
    Try(i + 1, sum, cnt);
    Try(i + 1, sum + a[i], cnt + 1);
}

void solve() {
    Try(0, 0, 0);
    if (res == INT_MAX) {
        cout << -1;
        return;
    }
    cout << res;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}