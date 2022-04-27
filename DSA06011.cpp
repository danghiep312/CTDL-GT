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

int n;
int a[10000];

void init() {
    cin >> n;
    FOR(i, 1, n) {
        cin >> a[i];
    }
}

void solve() {
    int res = a[0] + a[1], tmp = INT32_MAX;
    FOR(i, 1, n) {
        FOR(j, i + 1, n) {
            if (abs(a[i] + a[j]) < tmp) {
                tmp = abs(a[i] + a[j]);
                res = a[i] + a[j];
            }
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