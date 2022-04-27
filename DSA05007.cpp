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

int n, a[maxn * 10];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void solve() {
    int res = 0;
    int dp[n + 5] = {};
    dp[1] = a[1];
    dp[2] = max(a[1], a[2]);
    for (int i = 3; i <= n; i++) {
        dp[i] = a[i];
        dp[i] = max(dp[i] + dp[i - 2], dp[i - 1]);
    }
    cout << dp[n];
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