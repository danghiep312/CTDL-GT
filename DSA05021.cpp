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

vector<pair<int, int>> a;
int n;

void init() {
    cin >> n;
    a.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i].fi >> a[i].se;
    }
}

void solve() {
    int f[n + 10], res = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        f[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i].fi > a[j].se && f[i] <= f[j]) {
                f[i] = f[j] + 1;
            }
        }
        res = max(res, f[i]);
    }
    cout << res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}