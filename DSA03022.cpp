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

void init()
{
}

void solve()
{
    int n, ok = 0;
    cin >> n;
    long long x;
    vector<long long> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x)
            a.push_back(x);
        else
            ok = 1;
    }
    n = a.size();
    sort(a.begin(), a.end());
    long long ans = max(a[0] * a[1], max(a[0] * a[1] * a[n - 1], max(a[n - 1] * a[n - 2], a[n - 1] * a[n - 2] * a[n - 3])));
    if (ans > 0)
        cout << ans;
    else
        cout << 0;
}

int main()
{
    int t = 1;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}