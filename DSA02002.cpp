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

vector<vector<int>> res;
int n;
vector<int> a;

void init() {
    res.clear();
    cin >> n;
    a.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
    }
}

void solve() {
    do {
        res.pb(a);
        for (int i = 0; i < n - 1; i++) {
            a[i] += a[i + 1];
        }
        a.pop_back();
        n--;
    }
    while (n > 0);

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size() - 1) {
                cout << " ";
            }
        }
        cout << "]";
        cout << " ";
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