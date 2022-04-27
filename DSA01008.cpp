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

void init() {
    cin >> n >> k;
}

void sinh(string s, int cnt) {
    if (s.size() == n) {
        if (cnt == k) {
            cout << s << endl;
        }
    }
    else {
        sinh(s + "0", cnt);
        sinh(s + "1", cnt + 1);
    }
}

void solve() {
    sinh("", 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        solve();
        //cout << endl;
    }
}