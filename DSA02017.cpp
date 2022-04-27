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

int a[15][15];
vector<int> b;
vector<int> ss;
int n, res;

void init()
{
    res = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
    b.resize(10);
}

bool check(int x, int y)
{
    for (int i = 1; i < x; i++)
    {
        if (y == b[i] || abs(y - b[i]) == abs(i - x))
            return false;
    }
    return true;
}

void Try(int i, int sum)
{
    if (i == 9)
    {
        res = max(res, sum);
    }
    for (int j = 1; j <= 8; j++)
    {
        if (check(i, j))
        {
            b[i] = j;
            Try(i + 1, sum + a[i][j]);
        }
    }
}

void solve()
{
    Try(1, 0);
    cout << res;
    for (auto i : ss) {
        cout << i << " ";
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