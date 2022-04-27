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

void init() {
    cin >> n;
    n -= 2;
}

bool check(string s) {
    if (s[0] != '8' || s.back() != '6') return false;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '8' && s[i + 1] == '8') return false;
    }
    for (int i = 0; i < s.size() - 3; i++) {
        if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6' && s[i + 3] == '6') return false;
    }
    return true;
}

void sinh(string s) {
    if (s.size() == n) {
        if (check("8" + s + "6")) cout << "8" +  s + "6" << endl;
    }
    else {
        sinh(s + "6");
        sinh(s + "8");
    }
}

void solve() {
    sinh("");
}

int main() {
    init();
    solve();
    cout << endl;
}