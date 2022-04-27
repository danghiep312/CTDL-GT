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

int a[10][10];
int n, havePath;
vector<pair<string, pair<int, int>>> p = {{"D", {1, 0}}, {"L", {0, -1}}, {"R", {0, 1}}, {"U", {-1, 0}}};
vector<string> res;

void init()
{
    res.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        res.pb(s);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int u = i + p[k].se.fi, v = j + p[k].se.se;
        if (u >= 1 && u <= n && v >= 1 && v <= n && a[u][v] == 1)
        {
            a[u][v] = 0;
            Try(u, v, s + p[k].fi);
            a[u][v] = 1;
        }
    }
}

void solve()
{
    if (a[1][1] == 1) {
        a[1][1] = 0;
        Try(1, 1, "");}
    if (!res.size())
    {
        cout << -1;
        return;
    }
    for (auto it : res)
    {
        cout << it << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}