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

int n, k, sum;
int a[100];

void init()
{
    sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
}

void solve()
{
    sort(a, a + n);
    int res1 = 0, res2 = 0;
    for (int i = 0; i < k; i++)
    {
        res1 += a[i];
    }

    for (int i = 0; i < n - k; i++) {
        res2 += a[i];
    }
    cout << max(abs(2 * res1 - sum), abs(2 * res2 - sum));
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