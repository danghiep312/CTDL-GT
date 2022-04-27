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

string s;
vector<int> a;
bool flag;
vector<string> res;

void init()
{
    res.clear();
    a.clear();
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?' && i != 3)
        {
            a.pb(i);
        }
    }
    flag = false;
}

bool check(char c)
{
    s[3] = c;
    int x, y, z;
    x = (s[0] - '0') * 10 + s[1] - '0';
    y = (s[5] - '0') * 10 + s[6] - '0';
    z = (s[10] - '0') * 10 + s[11] - '0';
    if (c == '-')
    {
        if (x - y == z)
        {
            return true;
        }
    }
    if (c == '+')
    {
        if (x + y == z)
        {
            return true;
        }
    }
    if (c == '*')
    {
        if (x * y == z)
        {
            return true;
        }
    }
    if (c == '/')
    {
        if (x == y * z)
        {
            return true;
        }
    }
    return false;
}

void Try(int i, char c)
{
    if (i == a.size())
    {
        if (check(c))
        {
            res.pb(s);
            flag = true;
        }
        return;
    }

    if (a[i] == 0 || a[i] == 10 || a[i] == 5)
    {
        for (char j = '1'; j <= '9'; j++)
        {
            s[a[i]] = j;
            Try(i + 1, c);
            s[a[i]] = '?';
        }
    }
    else
    {
        for (char j = '0'; j <= '9'; j++)
        {
            s[a[i]] = j;
            Try(i + 1, c);
            s[a[i]] = '?';
        }
    }
}

void solve()
{
    if (s[3] == '?')
    {
        Try(0, '+');
        if (!flag)
        {
            Try(0, '-');
        }
        if (!flag)
        {
            Try(0, '*');
        }
        if (!flag)
        {
            Try(0, '/');
        }
    }
    else
    {
        Try(0, s[3]);
    }

    if (!flag)
    {
        cout << "WRONG PROBLEM!";
        return;
    }
    
    sort(res.begin(), res.end());
    cout << res[0];
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        init();
        solve();
        cout << endl;
    }
}