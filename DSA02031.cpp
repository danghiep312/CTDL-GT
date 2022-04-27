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
char c;

bool isNgAm(char c)
{
    if (c == 'U' || c == 'A' || c == 'E' || c == 'O' || c == 'I')
        return true;
    return false;
}

bool check(string ss)
{
    for (int i = 1; i < ss.size() - 1; i++)
    {
        if (isNgAm(ss[i]) && !isNgAm(ss[i - 1]) && !isNgAm(ss[i + 1]))
        {
            return false;
        }
    }
    return true;
}

void init()
{
    cin >> c;
    for (char i = 'A'; i <= c; i++)
    {
        s += i;
    }
}

void solve()
{
    do
    {
        if (check(s))
        {
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        init();
        solve();
        // cout << endl;
    }
}