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
map<int, int> a;

void init() {
    a.clear();
    cin >> n;
    int x;
    FOR(i, 1, n) {
        cin >> x;
        a[x]++;
    }
}

void solve() {
    for (auto it = a.begin(); it != a.end(); it++) {
        if (it->se > n / 2) {
            cout << it->fi;
            return;
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