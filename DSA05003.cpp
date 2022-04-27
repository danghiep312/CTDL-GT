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

string x, y, z;
int m, n, p;
void init() {
    cin >> m >> n >> p;
    cin >> x >> y >> z;
}

void solve() {
    int dp[m + 1][n + 1][p + 1] = {};
    FOR(i, 1, m) {
        FOR(j, 1, n) {
            FOR(k, 1, p) {
                if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max(dp[i][j][k - 1], max(dp[i][j - 1][k], dp[i - 1][j][k]));
                }
            }
        }
    }
    cout << dp[m][n][p];
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