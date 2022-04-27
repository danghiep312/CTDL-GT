#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;

ll luythua(ll n, ll k)
{
    if (k == 1)
        return n;
    ll tmp = luythua(n, k / 2);
    if (k % 2)
        return ((tmp * tmp) % MOD * n) % MOD;
    return (tmp * tmp) % MOD;
}

int main()
{
    while (1)
    {
        ll n, k;
        cin >> n >> k;
        if (n == 0 && k == 0)
            break;
        cout << luythua(n, k) << endl;
    }
}