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

vector<string> a1 = {"02", "20", "22"};
vector<string> a2 = {"02"};
vector<string> a3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};

void init()
{
}

void solve()
{
    for (int i = 0; i < a1.size(); i++)
        for (int j = 0; j < a2.size(); j++)
            for (int k = 0; k < a3.size(); k++)
                cout << a1[i] + "/" + a2[j] + "/" + a3[k] << endl;
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