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

vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n;
void init()
{
    cin >> n;
}

void solve()
{
    int res = 0;
    vector<int>::iterator it;
    while (n > 0)
    {
        it = upper_bound(a.begin(), a.end(), n);
        int pos = it - a.begin();
        pos--;
        res += (n / a[pos]);
        n %= a[pos];
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