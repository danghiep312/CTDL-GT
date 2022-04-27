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

string s;

void init() {
    cin >> s;
}

void solve() {
    s = ' ' + s;
    int f[s.size() + 5];
    f[0] = f[1] = 1;
    if (s[1] == '0') {
        cout << '0';
        return;
    }
    int n = s.size();
    for (int i = 2; i < s.size(); i++) {
        if (s[i] == '0') {
            if (s[i - 1] > '2') {
                f[n - 1] = 0;
                break;
            }
            f[i] = 0;
        }
        else {
            f[i] = f[i - 1];
        }
        int num = (s[i - 1] - '0') * 10 + s[i] - '0';
        if (num >= 10 && num <= 26) {
            f[i] += f[i - 2];
        }
    }
    cout << f[n - 1];
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}