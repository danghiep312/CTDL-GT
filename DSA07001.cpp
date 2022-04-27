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

vector<int> a;
string s;

void init() {

}   

void solve() {
    while (cin >> s) {
        int x;
        if (s == "push") {
            cin >> x;
            a.pb(x);
        }
        if (s == "show") {
            if (a.empty()) cout << "empty" << endl;
            else {
                for (int i = 0; i < a.size(); i++) {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        if (s == "pop") 
            if (!a.empty()) a.pop_back();
    }
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