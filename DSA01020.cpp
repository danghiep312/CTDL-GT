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
void init()
{
    cin >> s;
}

void solve()
{
    int n = s.size() - 1;
    while (s[n] == '0')
        n--;

    if (n != -1)
    {
        s[n] = '0';
    }
    
    for (int i = n + 1; i < s.size(); i++)
        s[i] = '1';

    cout << s;
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