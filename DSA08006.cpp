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

void init()
{
}

void solve()
{
    int n;
    cin >> n;
    queue<long long> q;
    q.push(9);
    while (q.size())
    {
        long long k = q.front();
        q.pop();
        if (k % n == 0)
        {
            cout << k << endl;
            break;
        }
        q.push(k * 10);
        q.push(k * 10 + 9);
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
        //cout << endl;
    }
}