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

string a, b;

void init() {
    cin >> a >> b;
    a = ' ' + a;
    b = ' ' + b;
}

void solve() {
    int n = a.size();
    int m = b.size();
    int dp[n + 5][m + 5] = {};
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (a[i] == b[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n - 1][m - 1];
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}