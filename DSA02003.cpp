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

int a[11][11];
int n, flag;
void init() {
    cin >> n;
    flag = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void go(int i, int j, string way) {
    if (a[i][j] == 0) return;
    if (i == n - 1 && j == n - 1) {
        cout << way << " ";
        flag = 0;
        return;
    }
    go(i + 1, j, way + "D");
    go(i, j + 1, way + "R");
}

void solve() {
    go(0, 0, "");
    if (flag) cout << "-1";
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