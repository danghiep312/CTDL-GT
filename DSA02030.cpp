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

char x;
int k;
string res;

void init()
{
    cin >> x >> k;
}

void Try(int i)
{

    for (char j = 'A'; j <= x; j++)
    {
        if (i == k)
        {
            cout << res << endl;
            return;
        }
        if (j >= res.back())
        {
            res += j;
            Try(i + 1);
            res.pop_back();
        }
    }
}

void solve()
{
    init();
    Try(0);
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        init();
        solve();
        // cout << endl;
    }
}