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

int n;

struct Mat{
    LL a[15][15] = {};
    int size;
    Mat() {
        size = n;
    }
};

Mat mult(Mat A, Mat B) {
    Mat C;
    for (int i = 1; i <= A.size; i++) {
        for (int j = 1; j <= A.size; j++) {
            for (int k = 1; k <= B.size; k++) {
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

void solve() {
    int k;
    cin >> n >> k;
    Mat A;
    for (int i = 1; i <= A.size; i++) {
        for (int j = 1; j <= A.size; j++) {
            cin >> A.a[i][j];
        }
    }
    Mat B = pow(A, k);
    LL res = 0;
    for (int i = 1; i <= A.size; i++) {
        res = (res % MOD + B.a[i][n] % MOD) % MOD;
    }
    cout << res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}