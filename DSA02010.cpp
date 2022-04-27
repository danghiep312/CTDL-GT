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

int n, x;
int a[40];
vector<int> v;
vector<vector<int>> res;

void init() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    v.clear();
    res.clear();
}

void Try(int pos, int sum) {
    if (sum > x) return;
    if (sum == x) {
        res.pb(v);
        return;
    } 
    for (int i = pos; i < n; i++) {
        if (sum < x) {
            v.pb(i);
            Try(v.back(), sum + a[i]);
            v.pop_back();
        }
    }
}

void solve() {
    Try(0, 0);
    if (!res.size()) {
        cout << -1;
        return;
    }
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << a[res[i][j]];
            if (j != res[i].size() - 1) cout << " ";
        }
        cout << "]";
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