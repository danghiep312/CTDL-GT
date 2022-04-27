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

int n = 2;

struct Mat{
    LL a[15][15] = {};
    pair<int, int> size;
    Mat() {
        size.fi = n;
        size.se = n;
    }
};

Mat x, y;


Mat mult(Mat A, Mat B) {
    Mat C;
    for (int i = 1; i <= A.size.fi; i++) {
        for (int j = 1; j <= A.size.se; j++) {
            for (int k = 1; k <= A.size.fi; k++) {
                C.a[i][j] = (C.a[i][j] % MOD + (A.a[i][k] * B.a[k][j]) % MOD) % MOD;
            }
        }
    }
    return C;
}

Mat pow(Mat A, LL k) {
    if (k == 1) return A;
    Mat tmp = pow(A, k / 2);
    if (k % 2 == 0) {
        return mult(tmp, tmp);
    } else {
        return mult(mult(tmp, tmp), A);
    }
}

void init() {
    x.a[1][1] = 0;
    x.a[1][2] = 1;
    x.a[2][1] = 1;
    x.a[2][2] = 1;

    y.size.se = 1;
    y.a[1][1] = 0;
    y.a[1][2] = 1;
}

void solve() {
    int k;
    cin >> k;
    Mat res = pow(x, k);
    res = mult(res, y);
    // for (int i = 1; i <= 2; i++) {
    //     for (int j = 1; j <= 2; j++) {
    //         cout << res.a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << res.a[2][2];
}

int main() {
    int t;
    cin >> t;
    init();
    while (t--) {
        solve();
        cout << endl;
    }
}