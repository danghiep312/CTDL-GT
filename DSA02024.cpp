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

int a[25];
int n;

set<string> ss;

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

bool check(string s) {
    int cnt = 0;
    int tmp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            cnt++;
            if (a[i] > tmp) {
                tmp = a[i];
            }
            else {
                return false;
            }
        }
    }
    if (cnt < 2) return false;
    return true;
}

void display(string s) {
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            res += to_string(a[i]);
            res += " ";
        }
    }
    res.pop_back();
    ss.insert(res);
    cout << endl;
}

void sinh(string s) {
    if (s.size() == n) {
        if (check(s)) {
            display(s);
        }
    }
    else {
        sinh(s + "1");
        sinh(s + "0");
    }
}

void solve() {
    sinh("");
    for (auto it : ss) {
        cout << it << endl;
    }
}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        init();
        solve();
        cout << endl;
    }
}