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

void solve()
{
    int n, k, s = 0, ok = 0;
    cin >> n >> k;
    int a[k + 1], b[k + 1];
    map<int, int> m;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        m[a[i]]++;
    }
    for (int i = k; i >= 1; i--)
    {
        if (a[i] != n - k + i)
        {
            ok = 1;
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            break;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        if (m[a[i]] == 0)
            s++;
    }
    if (ok == 0)
        s = k;
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // init();
        solve();
        // cout << endl;
    }
}