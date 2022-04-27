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

int n;
int a[maxn];
int l[maxn], r[maxn];

void init() {
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
}

void solve() {
    l[n] = r[n] = n;
    FORD(i, n - 1, 1) {
        if (a[i] > a[i + 1]) {
            r[i] = r[i + 1];
        }
        else {
            r[i] = i;
        }

        if (a[i] < a[i + 1]) {
            l[i] = l[i + 1];
        }
        else {
            l[i] = i;
        }
    }

    // FOR(i, 1, n) {
    //     cout << l[i] << " ";
    // }
    // cout << endl;
    // FOR(i, 1, n) {
    //     cout << r[i] << " ";
    // }
    int res = 0;
    FOR(i, 1, n) {
        res = max(res, r[l[i]] - i + 1);
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