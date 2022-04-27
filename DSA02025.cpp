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

int cnt(string a, string b) {
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        if (binary_search(b.begin(), b.end(), a[i])) {
            res++;
        }
    }
    return res;
}

vector<string> s;
int n;
int tick[20];
int p[20], res = INT_MAX;
void init() {
    cin >> n;
    string x;
    s.pb("");
    FOR(i, 1, n) {
        cin >> x;
        s.pb(x);
    }
}

void Try(int i, int num) {
    if (num > res) return;
    if (i == n + 1) {
        res = min(num, res);
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (tick[j] == 0) {
            tick[j] = 1;
            p[i] = j;
            Try(i + 1, num + cnt(s[j], s[p[i - 1]]));
            tick[j] = 0;
        }
    }
}

void solve() {  
    Try(1, 0);
    cout << res;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}