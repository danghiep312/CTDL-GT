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

vector<int> a, b;
int n;

void solve() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
        b[i] = a[i];
    }
    
    sort(a.begin(), a.end());
    int st = 0, en = n - 1;
    FOR(i, 0, n - 1) {
        if (a[i] != b[i]) {
            st = i;
            break;
        }
    }
    FORD(i, n - 1, 0) {
        if (a[i] != b[i]) {
            en = i;
            break;
        }
    }
    cout << st + 1 << " " << en + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}