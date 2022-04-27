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

LL n, k;

void init() {
    cin >> n >> k;
}

void solve() {
    LL f[n + 5] = {0}, a[n + 5];
    a[0] = 1;
    for (int i = 0; i < min(n, k); i++) {
        f[i] = 1;
    }

    for (int i = 1; i < n; i++) {
        if (i <= k) {
            f[i] = (f[i] + a[i - 1]) % MOD;
        }
        else {
            LL tmp = (a[i - 1] - a[i - k - 1]) % MOD;
            if (tmp < 0) tmp += MOD;
            f[i] = (f[i] + tmp) % MOD;
        }
        a[i] = (a[i - 1] + f[i]) % MOD;
    }
    cout << f[n - 1];
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