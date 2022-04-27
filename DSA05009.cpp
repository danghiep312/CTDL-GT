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

int n, s;
int a[105];
string ans;

void init()
{
    s = 0;
    ans = "NO";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
}

void Try(int pos, int k)
{
    if (ans == "YES")
        return;
    if (2 * k == s)
    {
        ans = "YES";
        return;
    }
    if (pos < n)
    {
        if (2 * (k + a[pos]) <= s)
            Try(pos + 1, k + a[pos]);
        Try(pos + 1, k);
    }
}

void solve()
{
    if (s % 2 == 0)
        Try(0, 0);
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
}