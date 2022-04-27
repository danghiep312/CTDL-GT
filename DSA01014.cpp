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

int n, k, s, res;
int a[50];

void init() {
    cin >> n >> k >> s;
    res = 0;
}

void display() {
    for (int i = 1; i <= k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sinh(int i, int sum) {
    if (i == k + 1) {
        if (sum == s) res++;
        return;
    }
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;


        sinh(i + 1, sum + j);
        
    }
}

void solve() {
    sinh(1, 0);
    cout << res;
}

int main() {
    // int t = 1;
    // cin >> t;
    // while (t--) {
    while (1) {
        init();
        if (n == 0 && k == 0 && s == 0) break;
        solve();
        cout << endl;
    }
}