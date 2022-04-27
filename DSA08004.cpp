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
    int k, x;
    string s;
    cin >> k >> s;
    long long n = 0;
    map<char, int> m;
    priority_queue<int> q;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    for (auto i : m)
        q.push(i.second);
    while (k--)
    {
        x = q.top();
        q.pop();
        q.push(x - 1);
    }
    while (q.size())
    {
        n += (long long)q.top() * q.top();
        q.pop();
    }
    cout << n << endl;
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