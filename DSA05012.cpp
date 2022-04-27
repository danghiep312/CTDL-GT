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

LL a[1003][1003];
int n, k;

void preprocess() {
    a[0][0] = 1;
    for (int i = 1; i < 1003; i++) {
        a[i][0] = 1;
        for (int j = 1; j < 1003; j++) {
            a[i][j] = (a[i - 1][j - 1] % MOD + a[i - 1][j] % MOD) % MOD;
        }
    }
}

void init() {
    cin >> n >> k;
}

void solve() {
    cout << a[n][k];
}

int main() {
    preprocess();
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}