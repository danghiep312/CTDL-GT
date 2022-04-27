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

set<int> a;
vector<int> b;
int n, k, dd[20];

void init() {
    cin >> n >> k;
    int x;
    FOR(i, 1, n) {
        cin >> x;
        a.insert(x);
    }
    b.pb(0);
    for (auto i : a) {
        b.pb(i);
    }
    n = b.size() - 1;
}

void display() {
    for (int i = 1; i <= k; i++) {
        cout << b[dd[i]] << " ";
    }
    cout << endl;
}

void sinh(int i) {
    for (int j = dd[i - 1] + 1; j <= n - k + i; j++) {
        dd[i] = j;
        if (i == k + 1) {
            display();
            return;
        }
        else {
            sinh(i + 1);
        }
    }
}

void solve() {
    sinh(1);
}

int main() {
    int t = 1;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}