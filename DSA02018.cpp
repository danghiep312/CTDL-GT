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

int flag, n;

void init() {
    flag = 0;
}

void check(string s, vector<LL> a) {
    do {
        LL res = a[0];
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+') {
                res += a[i + 1];
            }
            else if (s[i] == '-') {
                res -= a[i + 1];
            }
            else {
                res *= a[i + 1];
            }
        }
        if (res == 23) flag = 1;
    } while (next_permutation(a.begin(), a.end()));
}

void sinh(string s, vector<LL> a) {
    if (s.size() == 4) {
        check(s, a);
    }
    else {
        sinh(s + "+", a);
        sinh(s + "-", a);
        sinh(s + "*", a);
    }
}

void solve() {
    vector<LL> a(5);
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    sinh("", a);
    printf ("%s", flag ? "YES" : "NO");
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