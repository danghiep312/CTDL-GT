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
int s, t;
void init()
{
    cin >> s >> t;
}

void solve()
{
    pair<int, int> u;
    u.fi = s;
    u.se = 0;
    map<int, int> m;
    queue<pair<int, int>> q;
    q.push(u);
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        if (u.fi == t)
        {
            cout << u.se;
            return;
        }
        if (u.fi <= t && !m[u.fi * 2])
        {
            m[u.fi * 2] = 1;
            q.push(mp(u.fi * 2, u.se + 1));
        }
        if (u.first > 1 && !m[u.first - 1])
        {
            m[u.first - 1]++;
            q.push({u.first - 1, u.second + 1});
        }
    }
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