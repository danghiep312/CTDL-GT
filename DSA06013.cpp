#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl

using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 100005

int n, k;
vector<int> a, dd;

void init() {
    dd.assign(maxn, 0);
    cin >> n >> k;
    a.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
        dd[a[i]]++;
    }
}

void solve() {
    if (dd[k] == 0) {
        cout << -1;
        return;
    }
    else {
        cout << dd[k];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}