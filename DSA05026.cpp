#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FO(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;

typedef pair<int, int> II;
const long double PI = 2 * acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL)1e12;
const LL MOD = 1000000007;
#define maxn 100005

int c, n;
int a[105];
void init()
{
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    int f[n + 1][c + 1] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            if (a[i] <= j) {
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + a[i]);
            } else {
                f[i][j] = f[i - 1][j];
            }
        }
    }
    cout << f[n][c];
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}