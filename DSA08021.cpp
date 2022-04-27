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

struct point
{
    int x, y, s;
};

void init()
{
}

void solve()
{
    int n, m, ans = 1e9;
    cin >> n >> m;
    vector<vector<bool>> check(n + 1, vector<bool>(m + 1, 1));
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    point st, k;
    queue<point> q;
    st.x = st.y = 1;
    st.s = 0;
    q.push(st);
    while (q.size())
    {
        st = q.front();
        q.pop();
        if (st.x == n && st.y == m)
            ans = min(ans, st.s);
        k = st;
        k.s++;
        if (st.x + a[st.x][st.y] <= n && check[st.x + a[st.x][st.y]][st.y])
        {
            check[st.x + a[st.x][st.y]][st.y] = 0;
            k.x += a[st.x][st.y];
            q.push(k);
            k.x -= a[st.x][st.y];
        }
        if (st.y + a[st.x][st.y] <= m && check[st.x][st.y + a[st.x][st.y]])
        {
            check[st.x][st.y + a[st.x][st.y]] = 0;
            k.y += a[st.x][st.y];
            q.push(k);
            k.y -= a[st.x][st.y];
        }
    }
    if (ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        //cout << endl;
    }
}