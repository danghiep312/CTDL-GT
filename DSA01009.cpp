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

int n, k;
vector<string> res;

bool check(string s)
{
    int i = 0;
    int cntt = 0;
    while (i < s.size())
    {
        
        if (s[i] == 'A') {
            int cnt = 0;
            while (s[i] == 'A' && i < s.size())
            {
                cnt++;
                i++;
            }
            if (cnt == k) {
                cntt++;
            }
            if (cnt > k) {
                return false;
            }
        }
        else
            i++;
    }
    if (cntt == 1) return true;
    return false;
}

void sinh(string s)
{
    if (s.size() == n)
    {
        if (check(s))
        {
            res.push_back(s);
        }
    }
    else
    {
        sinh(s + "A");
        sinh(s + "B");
    }
}

void init()
{
    cin >> n >> k;
}

void solve()
{
    sinh("");
    cout << res.size() << endl;
    for (auto it : res) {
        cout << it << endl;
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