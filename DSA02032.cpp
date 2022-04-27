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
int a[100];
vector<int> b;
vector<vector<int>> res;
void init() {
    res.clear();
    b.clear();
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}   

void Try(int i, int sum, int pre) {
    if (sum > x) {
        return;
    }
    if (sum == x) {
        res.pb(b);
        return;
    }
    for (int j = pre; j < n; j++) {
        if (sum + a[j] <= x) {
            b.pb(a[j]);
            Try(i, sum + a[j], j);
            //Try(i + 1, sum + a[j]);
            b.pop_back();
        }
    }
}

void solve() {
    Try(0, 0, 0);
    if (!res.size()) {
        cout << -1;
        return;
    }
    cout << res.size();
    for (int i = 0; i < res.size(); i++) {
        cout << " {";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size() - 1) {
                cout << " ";
            }
        }
        cout << "}";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}