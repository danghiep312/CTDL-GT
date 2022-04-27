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
string s;
set<string> res;

void init() {
    cin >> n >> s;
}

void process(string ss) {
    string ans ="";
    for (int i = 0; i < ss.size(); i++) {
        if (ss[i] == '1') {
            ans += s[i];
        }
    }
    if (ans != "") res.insert(ans);
}

void sinh(string ss) {
    if (ss.size() == n) {
        process(ss);
    }
    else{
        sinh(ss + "0");
        sinh(ss + "1");
    }
}

void solve() {
    sinh("");
    for (auto i : res) {
        cout << i << " ";
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