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


int n;
void init()
{
    cin >> n;
}

void solve()
{
    queue<int> a;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << a.size() << endl;
        }
        if (x == 2)
        {
            if (a.empty())
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        if (x == 3)
        {
            int k;
            cin >> k;
            a.push(k);
        }
        if (x == 4)
        {
            if (!a.empty())
                a.pop();
        }
        if (x == 5)
        {
            if (a.empty())
            {
                cout << -1;
            }
            else
                cout << a.front();

            cout << endl;
        }

        if (x == 6)
        {
            if (a.empty())
            {
                cout << -1;
            }
            else
                cout << a.back();

            cout << endl;
        }
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