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

vector<int> a;
int n, x;

void init() {
    cin >> n >> x;
    a.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
    }
}

void solve() {
    if (binary_search(a.begin(), a.end(), x)) {
        cout << 1;
    } else {
        cout << -1;
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