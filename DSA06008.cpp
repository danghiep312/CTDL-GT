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

int cnt(int x, int a[], int n, int b[]) {
    if (x == 0) return 0;
    if (x == 1) return a[0];
    int pos = upper_bound(a, a + n, x) - a;
    int res = n - pos;
    res += (a[0] + a[1]);
    if (x == 2) res -= (a[3] + a[4]);
    if (x == 3) res += a[2];
    return res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m], dd[5] = {0}, res = 0;
    FOR(i, 0, n - 1) {
        cin >> a[i];
    }
    FOR(i, 0, m - 1) {
        cin >> b[i];
    }

    FOR(i, 0, n - 1) {
        if (b[i] < 5) {
            dd[b[i]]++;
        }
    }
    sort (b, b + n);
    FOR(i, 0, m - 1) {
        if (b[i] < 5) {
            res += cnt(b[i], a, n, b);
        }
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}