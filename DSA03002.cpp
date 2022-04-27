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

string a, b;

void init() {
    cin >> a >> b;
}

void solve() {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '6') a[i] = '5';
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '6') b[i] = '5';
    }
    cout << stoi(a) + stoi(b) << " ";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '5') a[i] = '6';
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '5') b[i] = '6';
    }
    cout << stoi(a) + stoi(b);
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