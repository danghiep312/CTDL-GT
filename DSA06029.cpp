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

vector<int> a;
stack<vector<int>> st;
int n;

void init()
{
    cin >> n;
    a.resize(n);
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
    }
}

void solve()
{
    int step = n - 1;
    for (int i = 0; i < n; i++)
	{
		int k = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = k;
		st.push(a);
	}
	while (st.size())
	{
		a = st.top();
		st.pop();
		cout << "Buoc " << step-- << ": ";
		for (int j = 0; j <= step + 1; j++)
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