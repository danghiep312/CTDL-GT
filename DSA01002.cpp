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

int k, n;
int a[1003];

void init() {
    cin >> n >> k;
    FOR(i, 1, k) {
        cin >> a[i];
    }
}

void solve() {
    int i = k;
    for (; i >= 1; i--) {
        if (a[i] != n - k + i) {
            break;
        }
    }
    if (i == 0) {
        FOR(j, 1, k) {
            cout << j << " ";
        }
    }
    else {
        a[i]++;
        FOR(j, i + 1, k) {
            a[j] = a[j - 1] + 1;
        }

        FOR(j, 1, k) {
            cout << a[j] << " ";
        }
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