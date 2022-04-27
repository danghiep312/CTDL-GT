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

int a[maxn + 5];
int n;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    stack<int> st;
    int r[n + 1];
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[i] >= a[st.top()])
        {
            st.pop();
        }

        if (st.empty())
        {
            r[i] = -1;
        }
        else
        {
            r[i] = st.top();
        }
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] != -1)
            cout << a[r[i]] << " ";
        else
            cout << -1 << " ";
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}