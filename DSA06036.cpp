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
int a[5005];

void init() {
    cin >> n >> k;
    FOR(i, 1, n) cin >> a[i];
}

void solve() {
    sort (a, a + n);
    FOR(i, 0, n - 1) {
        FOR(j, i + 1, n - 1) {
            if (binary_search(a + j + 1, a + n, k - a[i] - a[j])) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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