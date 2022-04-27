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
int a[1005];

void init() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void solve() {
    int b[k + 5] = {0};
    b[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = k; j >= a[i]; j--) {
            if (b[j] == 0 && b[j - a[i]]) {
                b[j] = 1;
            }
        }
    }
    if (b[k]) {
        cout << "YES";
    } else {
        cout << "NO";
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