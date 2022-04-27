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

int a[104];
int n;

void init()
{
    cin >> n;
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
}

void solve()
{
    int step = 1;
    for (int i = 0; i < n - 1; i++)
	{
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				flag = true;
			}
		}
		if (flag == false)
			break;
		cout << "Buoc " << step++ << ": ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << endl;
	}
}

int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}