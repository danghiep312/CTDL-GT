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

int dd[50] = {}, dd1[50] = {};
int n, k, a[50];

void init() {
    memset(dd, 0, sizeof(dd));
    memset(dd1, 0, sizeof(dd1));
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        dd[a[i]]++;
    }
    
    
}

void solve() {
    int j = k;
    while (a[j] == n - k + j) {
        j--;
    }
    if (j == 0) {
        cout << k;
        return;
    }
    a[j]++;
    for (int i = j + 1; i <= k; i++) {
        a[i] = a[i - 1] + 1;
    }

    for (int i = 1; i <= k; i++) {
        dd1[a[i]]++;
    }
    int res = 0;
    for (int i = 0; i < 50; i++) {
        if (dd[i] == dd1[i] && dd[i] != 0) {
            res ++;
        }
    }
    res = k - res;
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