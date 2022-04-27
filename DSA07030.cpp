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

int n, m, s = 1;
int a[505][505];
void init()
{
    s = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 1; j < n; j++)
            if (a[j][i] == 1)
                a[j][i] = a[j - 1][i] + 1;
}

void solve()
{
    for (int i = 0; i < n; i++)
    {
        stack<int> b, c;
        int l[m], r[m];
        for (int j = 0; j < m; j++)
        {
            while (!b.empty() && a[i][j] <= a[i][b.top()])
                b.pop();
            if (b.empty())
                l[j] = 0;
            else
                l[j] = b.top() + 1;
            b.push(j);
        }
        for (int j = m - 1; j >= 0; j--)
        {
            while (!c.empty() && a[i][j] <= a[i][c.top()])
                c.pop();
            if (c.empty())
                r[j] = m - 1;
            else
                r[j] = c.top() - 1;
            c.push(j);
        }
        for (int j = 0; j < m; j++)
            s = max(s, (r[j] - l[j] + 1) * a[i][j]);
    }
    cout << s;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}