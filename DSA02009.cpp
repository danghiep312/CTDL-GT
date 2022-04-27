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

int a[50];
int n, k, flag, sum;

void init() {
    cin >> n >> k;
    flag = sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
}

void Try(int s, int cnt) {
    if (flag) return;
    if (cnt == k) {
        flag = 1;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (s == sum) {
            Try(0, cnt + 1);
        }
        else if (s < sum) {
            Try(s + a[i], cnt);
        }
        else return;
    }
}

void solve() {
    if (sum % k != 0) {
        cout << 0;
        return;
    }
    sum /= k;
    Try(0, 0);
    cout << flag;
    
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