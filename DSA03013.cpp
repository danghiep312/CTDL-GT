#include <bits/stdc++.h>
#include <string>
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
int d;
map<char, int> m;

void init() {
    cin >> d >> s;
    m.clear();
}

void solve() {
    int n = s.size();
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    for (auto i : m) {
        if (i.se * d > n + 1) {
            cout << -1;
            return;
        }
    }
    cout << 1;
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