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

vector<int> a(20);
vector<int> b(20);
int n, k, stop;

void init() {
    stop = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++) {
        b[i] = i;
    }
} 

void sinh() {
    int i = k;
    while (b[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        stop = 1;
    }
    else {
        b[i]++;
        int p = b[i];
        while (i <= k) {
            b[i++] = p++;
        }
    }
}

void solve() {
    int cnt = 1;
    while (stop == 0) {
        sinh();
        cnt++;
        if (a == b) {
            cout << cnt;
            return;
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