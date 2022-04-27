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

int dd[maxn], n, m;
int a[maxn], b[maxn];
void init() {
    memset(dd, 0, sizeof(dd));

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dd[a[i]]++;
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
        dd[b[i]]++;
    }
} 

void solve() {
    for (int i = 0; i < maxn; i++) {
        if (dd[i] != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < maxn; i++) {
        if (dd[i] == 2) {
            cout << i << " ";
        }
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