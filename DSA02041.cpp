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

int n, res;


void init() {
    res = INT_MAX;
    cin >> n;
}

void Try(int cnt, int x) {
    if (cnt > res) return;
    if (x == 1) {
        res = min(res, cnt);
        return;
    }
    if (x % 3 == 0) Try(cnt + 1, x / 3);
    if (x % 2 == 0) Try(cnt + 1, x / 2);
    Try(cnt + 1, x - 1);
}

void solve() {
    Try(0, n);
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