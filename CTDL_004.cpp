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

int n, a[maxn], res = 0, k;
int b[maxn];

void init() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void backtrack(int pos, int cnt) {
    if (cnt == k) {
        res++;
        return;
    }
    for (int i = pos + 1; i < n; i++) {
        if (a[i] > a[pos]) {
            backtrack(i, cnt + 1);
        }
    }
}

int main() {
    init();
    for (int i = 0; i < n; i++) {
        backtrack(i, 1);
    }
    cout << res;
}
