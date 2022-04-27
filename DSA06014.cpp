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
#define maxn 1000005

int a[maxn];

void snt() {
    a[0] = a[1] = 1;
    for (int i = 2; i <= sqrt(maxn); i++) {
        for (int j = i * i; j <= maxn; j += i) {
            a[j] = 1;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    FOR(i, 2, n / 2) {
        if (a[i] == 0 && a[n - i] == 0) {
            cout << i << " " << n - i;
            return;
        }
    }
    cout << -1;
}

int main() {
    snt();
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}