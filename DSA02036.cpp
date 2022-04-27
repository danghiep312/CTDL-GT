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

int n, a[20];
vector<int> x;
vector<vector<int>> ans;
map<vector<int>, int> m;

void init()
{
    ans.clear();
    m.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
}

void Try(int k, int s)
{
    for (int i = k + 1; i <= n; i++)
    {
        Try(i, s);
        x.push_back(a[i]);
        if ((s + a[i]) % 2 == 1)
        {
            if (m[x] == 0)
            {
                m[x]++;
                ans.push_back(x);
            }
        }
        Try(i, s + a[i]);
        x.pop_back();
    }
}

void solve()
{
    Try(0, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
           cout << ans[i][j] << " ";
        cout << endl;
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
    }
}