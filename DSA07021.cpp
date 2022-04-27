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
    stack<pair<char, int>> st;
    int ans = 0, n = s.size();
    vector<int> F(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')' && !st.empty() && st.top().first == '(')
        {
            F[i] = F[i - 1];
            if (st.top().second != 0)
                F[i] += F[st.top().second - 1];
            F[i] += 2;
            st.pop();
        }
        else
            st.push({s[i], i});
    }
    for (int i = 0; i < n; i++)
        ans = max(ans, F[i]);
    cout << ans;
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