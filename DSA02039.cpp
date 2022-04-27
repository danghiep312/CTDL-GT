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
int n;
vector<vector<int> > res;

void init() {
    cin >> n;
    a.assign(1, n);
    res.clear();
}

void Try(int sum) {
    for (int i = a.back(); i >= 1; i--) {
        if (sum + i <= n) {
            a.push_back(i);
            if (sum + i == n) {
                res.push_back(a);
            }
            else Try(sum + i);
            a.pop_back();
        }
    }
}

void solve() {
    Try(0);
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << "(";
        for (int j = 1; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size() - 1) cout << " ";
        }
        cout << ") ";
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