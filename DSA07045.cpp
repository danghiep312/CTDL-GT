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

void init() {

}   

void solve() {
    string s;
    cin >> s;
    stack<char> a, b;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            if (!a.empty()) {
                b.push(a.top());
                a.pop();
            }
        }
        else if (s[i] == '>') {
            if (!b.empty()) {
                a.push(b.top());
                b.pop();
            }
        }
        else if (s[i] == '-') {
            if (!a.empty()) {
                a.pop();
            }
        }
        else {
            a.push(s[i]);
        }
    }
    string res;
    while (!a.empty()) {
        res += a.top();
        a.pop();
    }
    reverse(res.begin(), res.end());
    while (!b.empty()) {
        res += b.top();
        b.pop();
    }
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