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

int n, k, d = 0;
int a[20];

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d += a[i];
    }
}

int Try(int i, int cnt)
{
    if (cnt > k)
        return 0;
    if (i == n + 1)
    {
        if (cnt == k)
            return 1;
        return 0;
    }
    int sum = 0, ans = 0;
    for (int j = i; j <= n; j++)
    {
        sum += a[j];
        if (sum == d) {
            ans += Try(j + 1, cnt + 1);
        }
    }
    return ans;
}

void solve()
{
    if (d % k != 0) {
        cout << 0;
        return;
    } 
    else {
        d /= k;
        cout << Try(1, 0);
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}