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

LL n, m, k;
LL a[maxn], b[maxn], c[maxn];
vector<LL> res;

void init()
{
    res.clear();
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < k; i++)
        cin >> c[i];
}

void solve()
{
    int i = 0, j = 0, h = 0;
    while (i < n && j < m && h < k) {
        if (a[i] == b[j] && b[j] == c[h]) {
            res.pb(a[i]);
            i++;
            j++;
            h++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[h]) j++;
        else h++;
    }
    if (res.size() == 0) {
        cout << -1;
        return;
    }
    FOR(i, 0, res.size() - 1) {
        cout << res[i] << " ";
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