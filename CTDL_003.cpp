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

string ans;
vector<pair<int, int>> x;
vector<vector<int>> F;
int n, k;
void trace(int n, int k)
{
    if (n == 0)
        return;
    if (F[n][k] == F[n - 1][k])
        trace(n - 1, k);
    else
    {
        trace(n - 1, k - x[n].first);
        ans[n - 1] = '1';
    }
}

void init()
{
    cin >> n >> k;
    F.resize((n + 1), vector<int>(k + 1, 0));
    x.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans = ans + "0";
        cin >> x[i].second;
    }
    for (int i = 1; i <= n; i++)
        cin >> x[i].first;
}

void solve()
{
    for (int i = 0; i <= n; i++)
    {
        F[i][0] = 0;
        F[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
        {
            if (j < x[i].first)
                F[i][j] = F[i - 1][j];
            else
                F[i][j] = max(F[i - 1][j], F[i - 1][j - x[i].first] + x[i].second);
        }
    cout << F[n][k] << endl;
    trace(n, k);
    for (char i : ans)
        cout << i << ' ';
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