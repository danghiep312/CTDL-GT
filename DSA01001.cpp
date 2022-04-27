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

void solve() {
    cin >> s;
    int i = s.size() - 1;
    while (i >= 0 && s[i] != '0') i--;
    //cout << i << endl;
    if (i == -1) {
        FOR(j, 0, s.size() - 1) {
            cout << 1;
        }
    }
    else {
        s[i] = '1';
        FOR(j, i + 1, s.size() - 1) {
            s[j] = '0';
        }
        cout << s;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}