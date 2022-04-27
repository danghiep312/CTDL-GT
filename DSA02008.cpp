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
int a[20][20];
vector<int> b;
vector<vector<int>> res;

void init() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    b.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        b[i] = i;
    }
}

bool check() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i][b[i]];
    }
    if (sum == k) {
        return true;
    }
    return false;
}

void solve() {
    
    do {
        if (check()) {
            res.push_back(b);
        }
    } while (next_permutation(b.begin() + 1, b.end()));

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        for (int j = 1; j <= n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}