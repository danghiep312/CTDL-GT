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

map<int, int> m;
int n;

void init() {
    m.clear();
    cin >> n;
    int x;
    FOR(i, 1, n) {
        cin >> x;
        m[x]++;
    }
}

bool cmp(II a, II b) {
    if (a.se == b.se) {
        return a.fi < b.fi;
    }
    return a.se > b.se;
}

void solve() {
    vector<II> a;
    for (auto it = m.begin(); it != m.end(); it++) {
        a.push_back(mp(it->fi, it->se));
    }
    sort (a.begin(), a.end(), cmp);
    FOR(i, 0, a.size() - 1) {
        FOR(j, 1, a[i].se) {
            cout << a[i].fi << " ";
        }
        //cout << a[i].fi << " " << a[i].se << endl;
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