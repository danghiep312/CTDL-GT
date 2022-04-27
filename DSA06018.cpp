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
int dd[maxn] = {0}, n, minn, maxx;


void init() {
    memset(dd, 0, sizeof(dd));
    minn = INT_MAX;
    maxx = INT_MIN;
    cin >> n;
    a.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
        dd[a[i]] = 1;
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
}

void solve() {
    int res = 0;
    FOR(i, minn, maxx) {
        if (dd[i] == 0) {
            res++;
        }
    }
    cout << res;
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