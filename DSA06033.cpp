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

struct Node
{
    int val, ind;
};

vector<Node> a;
int n;

bool cmp(Node a, Node b)
{
    if (a.val == b.val)
    {
        return a.ind > b.ind;
    }
    return a.val < b.val;
}

void init()
{
    cin >> n;
    a.resize(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i].val;
        a[i].ind = i;
    }
    sort(a.begin(), a.end(), cmp);
}

void solve()
{
    int res = -1, minn = a[0].ind, tmp = a[0].val;

    for (int i = 1; i < n; i++)
    {
        if (a[i].val > tmp)
        {
            res = max(res, a[i].ind - minn);
        }

        if (a[i].ind < minn)
        {
            minn = a[i].ind;
            tmp = a[i].val;
        }
    }

    cout << res;
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